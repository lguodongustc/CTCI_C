#include <stdio.h>
#include <string.h>

bool IsOneOrZeroEdit(char* str1, char* str2)
{
	int len1 = strlen(str1);
	int len2 = strlen(str2);

	int len = (len1 > len2) ? len1 : len2;

	int i = 0;
	int j = len1 - 1;
	int k = len2 - 1;

	int diff = 0;
	while ((i<j) && (i<k))
	{
		if(str1[i]==str2[i])
			i++;
		else
			diff++;

		if(str2[j--]!=str2[k--])
			diff++;
	
		if(diff > 1)
			return false;
	}

	return true;
}

void main()
{
	char str1[] = "peal";
	char str2[] = "peel";

	IsOneOrZeroEdit(str1, str2);
}
