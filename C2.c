#include<stdio.h>

int main()
{
	int A, B;
	double persenB;
	
	scanf("%d", &A);
	scanf("%d", &B);
	
	persenB= ((double)B/A)*100;
	printf("%.4lf%%\n", persenB);
	
	return 0;
}
