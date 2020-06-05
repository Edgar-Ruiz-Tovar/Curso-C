#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	char x,progress[5]={'*','*','*','*','*'},word[5]={'a','b','c','d','e'};
	int count,i;
	do{
		system("cls");
		count=0;
		printf("Introduce una letra: \n");
		scanf("%c",&x);
		fflush(stdin);
		for(i=0;i<5;i++)
		{
			if(word[i]==x)
				progress[i]=word[i];
		}
		for(i=0;i<5;i++)
		{
			if(progress[i]!='*')
				count++;
		}
		for(i=0;i<5;i++)
			printf("%c ",progress[i]);
		printf("\tAciertos: %i\n\n",count);
		printf("Pulsa ENTER para continuar\n");
		getch();
	}while(count<5);
	system("cls");
	printf("%cFelicidades,Ganaste%c La palabra correcta era: \n",173,33);
	for(i=0;i<5;i++)
		printf("%c ",progress[i]);
	return 0;
}
