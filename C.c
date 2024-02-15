#include <stdio.h>

int main()
{
    char N1[100];
	char N2[100];
	int U1;
	int U2;
	double T1;
	double T2;
	
	scanf ("%s %lf %d %s %lf %d",N1,&T1,&U1,N2,&T2,&U2);
	
	printf ("Name 1: %s",N1);
	printf ("\nHeight 1: %.2lf",T1);
	printf ("\nAge 1: %d",U1);
	printf ("\nName 2: %s",N2);
	printf ("\nHeight 2: %.2lf",T2);
	printf ("\nAge 2: %d\n",U2);
	
	return 0;
}
