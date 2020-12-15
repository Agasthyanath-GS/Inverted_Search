#include"main.h"


int main()
{

int option,return_value;
char buff[30],ch;
char save_file[30];
FILE *fp;

node key_array[27];

fp=fopen("file_names.txt","a+");
setting_key(key_array);
 
 system("clear");

do
{
printf("->Enter the Option:\n\n1.Enter the DataBase\n2.Display DataBase\n3.Search in DataBase\n4.Save DataBase\n");
scanf("%d",&option);

	switch(option)
	{
  
		case 1:
 				printf("\nenter the filename\n");
				scanf("%s",buff);
				fclose(fp);
				return_value = file_check(buff);
				if(return_value == 0)
				{
					fp=fopen("file_names.txt","a+");
                	fwrite(buff,strlen(buff),1,fp);
					fprintf(fp," ");
					database_entry(buff,key_array);
				}
				else
					printf("\nyou entered the same file name again...\n");
                break;

 		case 2:
				print_database(key_array);
				break;

		case 3:
				printf("\nenter the word you want to search\n");
				scanf("%s",buff);
				search_database(buff,key_array);  
				break;

		case 4:
			    printf("\nenter the file name to save data\n");  
				scanf("%s",save_file);
				save_database(key_array,save_file);
				printf("\nDATA saved sucessfully...!!!!!!\n");
				break;

       default:
               printf("\ndefault input option\n");
			   break;     

	}
printf("\ndo you want continue (Y/N)\n");
while(getchar() != '\n');  
scanf("%c",&ch);
}while(ch == 'Y' || ch == 'y');


fclose(fp);
fp = fopen("file_names.txt","w");
fclose(fp);
return 0;
}