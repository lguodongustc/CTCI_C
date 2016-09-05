#include <stdio.h>
#include <string.h>


void InsertSpace(char s[], int len)
{
	char new[4*len]={'\0'};
	char *delim = " ";
	char *p = NULL;
	sprintf(new, "%s", strtok(s, delim));
	while((p = strtok(NULL. delim)))
		sprintf(new, "%20%s",strtok(NULL,delim));

	strcpy(s, new);	
}	

void InsertSpace_inplace(char s[])
{
	
}

int main()
{
	char s[] = "Mr John Smith    ";
	int len = 13;
	InsertSpace(s,len);	
	return 0;
}
