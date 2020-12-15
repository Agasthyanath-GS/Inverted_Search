#include"main.h"
int print_database(node *key_array)
{
  int i = 0;
while(i != 26)
 {
    //printf("%c\n",key_array[i].key);
	words *tmp1 = key_array[i].link,*tmp2;
    while(tmp1 != NULL )
	{
		tmp2=tmp1;
 		while(tmp2 != NULL)
		{
        	printf("%s--",tmp2->word);
			printf("%s.",tmp2->file_name);
			printf("[%d] ",tmp2->count);
			printf("\n");
			tmp2 = tmp2->left_link;
		}
		tmp1=tmp1->down_link;	
	}
	i++;
	}
 return 0;
}