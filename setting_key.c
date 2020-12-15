#include"main.h"
int count = 0;
int setting_key(node *key_array)
{
  	if(count == 26)
		return sucess;
   else
	{
		key_array[count].key = 'A' + count;
		key_array[count].link= NULL;
		count++;
		setting_key(key_array);	
	}
}	