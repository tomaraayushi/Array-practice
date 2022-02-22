#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[100];
    int b[100];
    int c[100];
    int n = get_int("A: ");
    int m = get_int("B: ");
    for(int i = 0; i < n; i++)
    {
        printf("%ith value of A: ", i);
        a[i] = get_int(" ");
    }
    printf("\n");
    for(int i = 0; i < m; i++)
    {
        printf("%ith value of B: ", i);
        b[i] = get_int(" ");
    }
    printf("\n");
    for(int i =0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("Sum of %ith elements at C: %i\n", i, c[i]);
    }
    printf("\n");
}