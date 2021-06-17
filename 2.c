#include <stdio.h>
int len(char s[50]);
void read();
void replace();
char str[50], pat[30], rep[30];
int i, j, slen, plen, rlen, flag = 0;
int main()
{
	read();
	return 0;
}
void read()
{
	printf("enter main string\n");
	fgets(str, 50, stdin);
	slen = len(str);
	printf("enter pattern string\n");
	fgets(pat, 30, stdin);
	plen = len(pat);
	printf("enter replace string\n");
	fgets(rep, 30, stdin);
	rlen = len(rep);
	if (slen < plen)
	{
		printf("main string len is too small\n");
	}
	else if (plen != rlen)
	{
		printf("pat str len doesnot match with rep str len\n");
	}
	else
	{
		replace();
		if (flag == 0)
		{
			printf("pat not found\n");
		}
		else
		{
			printf("replaced str=%s\n", str);
		}
	}
}
int len(char s[50])
{
	for (i = 0; str[i] != '\n'; i++)
		return i;
}
void replace()
{
	i = j = 0;
	while(str[i]!='\n')
	{
		if (str[i] == pat[j])
		{
			i++;
			j++;
		}
		else if (j == 0)
		{
			i++;
		}
		else
		{
			j = 0;
		}
		if (pat[j] == '\n')
		{
			flag = 1;
			for (i = i - 1, j = j - 1; j >= 0; i--, j--)
				str[i] = rep[j];
		}
	}
}
