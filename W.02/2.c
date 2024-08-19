#include<stdio.h>

int partition(int arr[],int start,int end)
{
    int pivot = arr[end];
    int pindex = start;
    for (size_t i = start; i < end; i++)
    {
        if(arr[i]<=pivot)
        {
            int temp =arr[i];
            arr[i] = arr[pindex];
            arr[pindex] = temp;
            pindex++;
        }
    }
    int temp =arr[end];
    arr[end] = arr[pindex];
    arr[pindex] = temp;
    return pindex;
}

void Quick_Sort(int arr[],int start , int end)
{
    if(start<end)
    {
        int part = partition(arr,start,end);
        Quick_Sort(arr,start,part-1);
        Quick_Sort(arr,part+1,end); 
    }
}

int main(void)
{
    int arr[5]={5,4,3,2,1};
    int n =5;
    Quick_Sort(arr,0,4);
    for (size_t i = 0; i < n; i++)
     {
        printf("%d ",arr[i]);
     }
}