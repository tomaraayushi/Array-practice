#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int a[100];
    int even[100];
    int odd[100];
    int evensize = 0;
    int oddsize = 0;
    int n = get_int("N: ");
    for(int i = 0; i < n; i++)
    {
        printf("%ith value: ", i);
        a[i] = get_int(" ");
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] % 2 == 0)
        {
            even[evensize] = a[i];
            evensize++;
        }
        else
        {
            odd[oddsize] = a[i];
            oddsize++;
        }
    }printf("Even array: ");
    for(int i = 0; i < evensize; i++)
    {
        printf(" %i ", even[i]);
    }
    printf("\nOdd array: ");
    for(int i = 0; i < oddsize; i++)
    {
        printf(" %i ", odd[i]);
    }
    printf("\n");
}