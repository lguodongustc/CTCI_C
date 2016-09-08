#include<stdio.h>
#include<string.h>


bool isSubstring(char* str1, char* str2)
{
	if(strstr(str1, str2)!=NULL)
		return true;
	
	return false
}

bool isRotation(char* s1, char* s2)
{
	char temp[100]={'\0'};

	strcpy(temp, s1);
	strcat(temp, s1);

	return isSubstring(temp, s2);
	
}

int main()
{	
	char* s1 = waterbottle;
	char* s2 = erbottlewat;

	isRotation(s1, s2);
	return  0;
}
