#include <stdio.h>
#include <string.h>


// ascii 128, int 16 bit, 8 integer to represent the 128 bit ascii
bool IsUnique(char *str)
{
	int table[8]={0};
	
	for(int i=0; i < strlen(str); i++)
	{
		int temp = (int) str[i];

		int table_index = temp / 8；
		int inner_index = temp % 8;
		if( (table[table_index] >> inner_index) % 2 )
			return false;
		else
			table[table_index] | (1 << index_index);
	}
	return true;
}

int main()
{
	char str[100]={'\0'};
	scanf("%s", str);
	IsUnique(str);
	return 0;
}
