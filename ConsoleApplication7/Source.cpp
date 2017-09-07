#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int n = 0;
	int x = 0;
	int y = 0;
	int sum = 0;
	srand(time(NULL));
	while (1) {
		printf("Your base value :\n");
		scanf_s("%d", &n);
		printf("How many dice:\n");
		scanf_s("%d", &x);
		printf("d");
		scanf_s("%d", &y);
		switch (x)
		{
		case 1:sum = n + 1 + (rand() % y); break;
		case 2:sum = n + 2 * (1 + (rand() % y)); break;
		case 3:sum = n + 3 * (1 + (rand() % y)); break;
		default:break;
		}
		printf("Identification of:%d\n", sum);
	}
}