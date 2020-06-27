#include<stdio.h>
#include<conio.h>
int main()
{
	float number;
	printf("Introduce un n%cmero: ",163);
	scanf("%f",&number);
	if(number>=2 && number<=10)
		printf("Tu n%cmero esta entre 2 y 10",163);
	else
		printf("Tu n%cmero no esta entre 2 y 10");
	getch();
	return 0;
}
