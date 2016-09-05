#include <stdio.h>
#include <string.h>


bool IsPermutation(char *str1, char *str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 != len2)
		return false;

	int table[128]={0};
	for(int i = 0; i < len1; i++)
	{
		table[str1[i]]++;
		table[str2[i]]--;
	}

	for(int i = 0; i < 128; i++)
	{
		if(table[i]!=0)
			return false;
	}
	return true;
}

/*??????????*/
bool IsPermutation_bit(char * str1, char * str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	if (len1 != len2)
		return false;
	
	
}
int main()
{
	char str1[100] = {'\0'};
	char str2[100] = {'\0'};

	IsPermutation(str1, str2);
	return 0;
}
