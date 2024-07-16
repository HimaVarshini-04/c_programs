#include <stdio.h> 
void main() 
{ 
    int a[100], n; 
    int b[100], i;
    printf("Enter the no.of elements in an array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; i++)
    { 
        b[i] = a[i]; 
    } 
    printf("The first array is :"); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", a[i]); 
    } 
    printf("\nThe second array is :"); 
    for (i = 0; i < n; i++) 
    { 
        printf("%d ", b[i]); 
    } 
}
