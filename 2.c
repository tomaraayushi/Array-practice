#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[10];
    int n = get_int(" ");
    for( int i =0; i < n; i++)
    {
        printf("Enter the %ith value: ", i);
        a[i] = get_int(" ");
    }
    for( int i = n-1; i >=0; i--)
    {
        printf("%i\n", a[i]);
    }
}