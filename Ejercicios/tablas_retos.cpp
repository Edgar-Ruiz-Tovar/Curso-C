// 4. Print all the multiplication tables with numbers from 1 to 10
#include<stdio.h>
#include<conio.h>			
int main()
{
	int i,j;
	for(j=1;j<11;j++)// j: tabla correspondiente
	{
		printf("\t\tTabla del %i\n",j);
		for(i=1;i<11;i++)
			printf("\t%ix%i=%i\n",j,i,j*i);
		printf("\n\n");
	}
	return 0;
}
