#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[100];
    int n = get_int("N: ");
    for(int i = 0; i < n; i++)
    {
        printf("Enter %ith value: ", i);
        a[i] = get_int(" ");
    }
    int f = 1;
    for(int i = 1; i < n; i++)
    {
        if(a[i] == a[i-1])
        {
            f++;
        }
        else
        {
            printf("Frequency of %i is %i \n", a[i-1], f);
            f = 1;
        }
    }
    printf("Frequency of %i is %i \n", a[n-1], f);

}