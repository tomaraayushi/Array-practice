#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[100];
    int n = get_int("N: ");
    for(int i =0; i < n; i++)
    {
        printf("%ith value: ", i);
        a[i] = get_int(" ");
    }
    int max = a[0];
    int min = a[0];
    for( int i = 0; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    printf("Maximum element: %i\n", max);
    printf("Minimum element: %i\n", min);
}