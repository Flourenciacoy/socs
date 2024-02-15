#include <stdio.h>

int main () 
{
	int N,M,i;
	
	scanf ("%d %d",&N,&M);
	
	for (i = 0;i < M+1;i++) {
		printf ("%d\n",N);
		N++;
	}
}
