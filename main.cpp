#include<stdio.h>
#include<stdlib.h>

int main()
{
	int year,month,day;
	printf("Please enter your year of birth:");
	scanf("%d",&year);
	printf("Please enter your month of birth:");
	scanf("%d",&month);
	printf("Please enter your date of birth:");
	scanf("%d",&day);
	printf("Your birthday is: %d-%d-%d\n",year,month,day);
	system("pause");
	return 0;
}
