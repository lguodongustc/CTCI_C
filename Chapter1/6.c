#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* StrCompression(char* str)
{
	int len = strlen(str);
	
	char* comp = (char *)calloc(100,1);
	
	char current=NULL;
	count=0;
	j=0;
	for(int i=0; i<len; i++)
	{
		if(current!=str[i])
		{
			if(count!=0)
				comp[j++]=count+'0';
			current = str[i];
			comp[j++] = str[i];
		}
	}

	if(count!=0)
		comp[j++]=count+'0';

	if(j<=len)
		return comp;

	else
		return str;
}

void main()
{

	char *str = "aabccccaaa";
	str = StrCompression(str);

}
