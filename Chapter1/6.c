#include <stdio.h>
#include <string.h>

void StrCompression(char str[])
{
	int len = strlen(str);
	
	char new[100] = {'\0'};

	
	
	char current=NULL;
	count=0;
	j=0;
	for(int i=0; i<len; i++)
	{
		if(current!=str[i])
		{
			if(count!=0)
				new[j++]=count+'0';
			current = str[i];
			new[j++] = str[i];
		}
	}

	if(count!=0)
		new[j++]=count+'0';

	if(j<=len)
		return new;
}

void main()
{

	char str[] = "aabccccaaa";
	StrCompression(str);

}
