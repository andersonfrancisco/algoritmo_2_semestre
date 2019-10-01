#include<stdio.h>
int main()
{
	int num;
	int resp;

	printf("digite um numero para saber seu antecessor");
	scanf("%d", &num);

	resp = num -1;

	printf("seu antecessor é %d\n", resp);

	return 0;
}
