#include<stdio.h>

int main(void)
{
    int arr[5]={5,4,3,2,1};
    int n = 5;
    int position = 2;
    if(position>=n) 
    {
        printf("Deletion not possible :(\n");
        return 1;
    }
    for (size_t i = position-1 ; i < n-1; i++)
    {
        arr[i] = arr[i+1];
    }
    n--;
    for (size_t i = 0; i < n; i++)
     {
        printf("%d ",arr[i]);
     }
     return 0;
}