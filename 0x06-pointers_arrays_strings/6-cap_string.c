#include "holberton.h"
#define MAX 100
/**
 * *cap_string - function
 * @str: Pointer
 * Return: poniter return to function.
 */

char *cap_string(char *s)
{int i;
	s[MAX]={0};
	//capitalize first character of words
	for(i=0; s[i]!='\0'; i++)
	{
		//check first character is lowercase alphabet
		if(i==0)
		{
			if((s[i]>='a' && s[i]<='z'))
				s[i]=s[i]-32; //subtract 32 to make it capital
			continue; //continue to the loop
		}
		if(s[i]==' ')//check space
		{
			//if space is found, check next character
			++i;
			//check next character is lowercase alphabet
			if(s[i]>='a' && s[i]<='z')
			{
				s[i]=s[i]-32; //subtract 32 to make it capital
				continue; //continue to the loop
			}
		}
		else
		{
			//all other uppercase characters should be in lowercase
			if(s[i]>='A' && s[i]<='Z')
				s[i]=s[i]+32; //subtract 32 to make it small/lowercase
		}
	}
	
	return 0;
}
