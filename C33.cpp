#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
 
    for(int testCase= 1; testCase<= T; testCase++)
	{
        int A, B;
        scanf("%d %d", &A, &B);

        printf("Case #%d: ", testCase);
        if (A > B) 
		{
            printf("Go-Jo\n");
        } 
		else 
		{
            printf("Bi-Pay\n");
        }
    }
    return 0;
}
