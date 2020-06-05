// Hacer un programa que dada una palabra me de cuántas vocales tiene
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char word[40];
	int count=0,i;
	printf("Introduce una palabra: \n");
	scanf("%s",word);
	for(i=0;i<strlen(word);i++)
	{
		if(word[i]=='a' || word[i]=='e' || word[i]=='i' || word[i]=='o' || word[i]=='u')
			count++;
	}
	printf("El numero de vocales es: %i",count);
	getch();
	return 0;
}
