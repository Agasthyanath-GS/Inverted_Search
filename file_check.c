#include"main.h"
int file_check(char *buff)
{
	FILE *fp;
	char ch,word[30];
	int i = 0;

	fp=fopen("file_names.txt","r");
	fseek(fp,0,SEEK_SET);

	while((ch = fgetc(fp)) != EOF)
	{
		if(ch == ' ' || ch == '\n' || ch == '\t')
		{
			word[i] = '\0';
        	if(strcmp(buff,word) == 0 )
				return failure;
			else
				i=0;
		}
		else
		{
          	word[i] = ch;
			i++;
		}		
	}
	word[i] = '\0';
	if(strcmp(buff,word) == 0 )
		return failure;
	else
		return sucess;
}