#include<stdio.h>


void bubbleSort(int arr[], int n) 
{ 
    int i, j; 
    for (i = 0; i < n - 1; i++) 
    
        for (j = 0; j < n - i - 1; j++) 
            if (arr[j] > arr[j + 1]) {
               int temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp ;
            }
                
} 
int i;
void print(int *arr,int n)
{
    if(n<=0) return;
     
    printf("%d ",arr[i]);
    i++;
    print(arr,n-1);
}
int main(void)
{
    int arr[5]={5,4,2,3,1};

    bubbleSort(arr,5);
    print(arr,5);
    return 0;
}