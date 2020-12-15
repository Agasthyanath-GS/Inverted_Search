#include"main.h"
int save_database(node *key_array,char *file_name)
{
  int i = 0;

  FILE *fp;

fp = fopen(file_name,"w+");

while(i != 26)
 {
	words *tmp1 = key_array[i].link,*tmp2;
    while(tmp1 != NULL )
	{
		tmp2=tmp1;
 		while(tmp2 != NULL)
		{
        	fprintf(fp,"%s--",tmp2->word);
			fprintf(fp,"%s ",tmp2->file_name);
			fprintf(fp,"[%d]",tmp2->count);
			fprintf(fp,"\n");
			tmp2 = tmp2->left_link;
		}
		tmp1=tmp1->down_link;	
	}
	i++;
	}
fclose(fp);
 return 0;
}