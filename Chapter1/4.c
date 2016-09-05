#include <stdio.h>
#include <string.h>

bool Is_Palindrome_Permutation(char* str)
{
	int table[4] = {0};
	
	int table_index;
	int inner_index;
	int index;

	for (int i = 0; i < strlen(str); i++)
	{
		if(str[i] == ' ')
			continue;

		if(str[i] >= 'A' && str[i] <= 'Z')
			index = (int)str[i] + 32;
		else
			index = (int)str[i];
		
		table_index = index / 32;
		inner_index = index % 32;
		
		table[table_index] ^ (1 << inner_index);
	}

	int test = 0;
	int inner_test = 0;

	for (int i = 0; i < 4; i++)
	{
		
		if(table[i] != 0)
		{
			test++;
			if (test > 1)
				return false;
			for(int j = 0; j < 32; j--)
			{
				if((table[i] >> j) % 2 == 1)
				{
					inner_test++;
					if (inner_test>1)
						return false;
				}
			}
		}
	}
}


void main()
{
	char str[]="Tact Coa";
	
	Is_Palindrome_Permutation(str);
	return 0;
}
