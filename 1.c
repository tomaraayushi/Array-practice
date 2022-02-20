#include <cs50.h>
#include <stdio.h>

int main(void)


{
    int a[10];
    int n = get_int("X: ");
    for(int i = 0; i< n; i++)
    {
        printf("Enter value of %ith element: ", i);
        a[i] = get_int("");
    }
    for(int i =0; i < n; i++)
    {
        printf("%i\n", a[i]);
    }
}