#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[200];
    int product = 1;
    int n = get_int("N: ");
    for(int i = 0; i < n; i++)
    {
        printf("%ith element: ", i);
        a[i] = get_int(" ");
    }
    for(int i = 0; i < n; i++)
    {
        product = product*a[i];
    }
    printf("Product of all elements: %i\n", product);
}