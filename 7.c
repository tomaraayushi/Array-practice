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
    int min = a[0];
    int second = a[0];
    for(int i = 1; i < n; i++)
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
    for(int i = 0; i < n; i++)
    {
        if(a[i] < max && a[i] > min)
        {
          second = a[i];
        }
    }
        printf("Second largest element: %i\n", second);

}