#include<stdio.h>

void mergHelp(int left[],int right[],int arr[],int l,int r)
{
    int i =0,j=0,k=0;
    while (i<l && j<r)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
           
        }else
        {
            arr[k]=right[j];
            j++;
        }
     k++;
    }
    while(i<l)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<r)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
}
void MergSort(int arr[],int n)
{
    if(n<2)return;
    int mid = n/2;
    int left[mid],right[n-mid];
    for (size_t i = 0; i <mid ; i++)
    {
        left[i] = arr[i];
    }
    for (size_t i = mid,j=0; i < n; i++,j++)
    {
        right[j] = arr[i]; 
    }
    
    MergSort(left,mid);
    MergSort(right,n-mid);
    mergHelp(left,right,arr,mid,n-mid);

}

int main(void)
{
    int arr[5]={5,4,3,2,1};
    int n =5;
    MergSort(arr,n);
    for (size_t i = 0; i < n; i++)
     {
        printf("%d ",arr[i]);
     }
    return 0;
}