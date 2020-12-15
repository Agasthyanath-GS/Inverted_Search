#include"main.h"
int search_database(char *word,node *key_array)
{
	int i = 0;
	words *tmp1,*tmp2 ;

while(i != 26)
{
	if(key_array[i].key == word[0] || word[0] == key_array[i].key + 32)
	{
      	tmp1 = key_array[i].link;
		while(tmp1 != NULL)
		{
			if(strcmp(tmp1->word,word) == 0)
			{
				tmp2 = tmp1;
				 while(tmp2 != NULL)
				{
					printf("%s--",tmp2->word);
					printf("%s.",tmp2->file_name);
                    printf("[%d]\n",tmp2->count);
					tmp2=tmp2->left_link;
				}
				return sucess;
			}
 			tmp1 = tmp1->down_link;
		}
	printf("\nThere is no word in the database as you entered....\ntry another word.\n");
	return failure;
	}
	else
	  i++;
}
	printf("\nplease enter a valid word of alphebet\n ");
	
}