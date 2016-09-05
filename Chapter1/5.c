#include <stdio.h>
#include <string.h>

bool IsOneOrZeroEdit(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	int len = (len1 > len2) ? len1 : len2;

	for (int i = 0; i < len; i++)
	{
			
	}  
}

void main()
{
	char str1[] = "peal";
	char str2[] = "peel";

	IsOneOrZeroEdit(str1, str2);
}
