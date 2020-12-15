#include"main.h"

int database_entry(char *filename,node *key_array)
{

	char ch,word[30];
	int i=0; 
    FILE *fp1;
	char *str = strchr(filename,'.');

	if(strcmp(str,".txt") != 0)
		return failure;

    fp1 = fopen(filename,"r");


	while((ch = fgetc(fp1)) != EOF)
		{
			if(ch == ' ' || ch == '\0' || ch == '\t')
				{
					word[i] = '\0';
					word_entry(filename,word,key_array);
					i=0;
				}
			else
				{
					
					word[i] = ch;
					i++;
					
				}					

		}
			word[i] = '\0';
			word_entry(filename,word,key_array);
		

fclose(fp1);
}