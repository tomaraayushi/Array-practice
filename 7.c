#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[100];
    int n = get_int("N: ");
    for(int i = 0; i < n; i++)
    {
        printf("%ith element: ", i);
        a[i] = get_int(" ");
    }
    int max = a[0];
    int max2 = a[0];
    for(int i = 1; i < n; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    for(int i =0; i < n; i++)
    {
        if( a[i] > max2 && max > a[i])
        {
            max2 = a[i];
        }
    }
    printf("Second largest: %i\n", max2);

}