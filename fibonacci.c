#include <stdio.h>

int main() 
{
    int n, first = 1, second = 2, next, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    
    for (i = 1; i < n; i++) 
	{
        if (i <= 1) 
		{
            next = i;
        } 
		else
		{
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }

    printf("\n");

    return 0;
}
