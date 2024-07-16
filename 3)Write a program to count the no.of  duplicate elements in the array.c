#include <stdio.h>
void main()
{
    int a[100], n, ctr = 0,i, j;  
    printf("Enter the no.of elements in an array :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);  
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                ctr++;  
                break;  
            }
        }
    }
    printf("Total number of duplicate elements in the array: %d\n", ctr);
     
}
