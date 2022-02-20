#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[100];
    int sum =0;
    int n = get_int("x: ");
    for( int i = 0; i < n; i++)
    {
        printf("Enter %ith value: ", i);
        a[i] = get_int(" ");
    }
    for( int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum: %i\n", sum);
}