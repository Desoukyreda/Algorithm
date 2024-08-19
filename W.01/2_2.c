#include<stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    int l = 0,r=n-1,mid;
    int num =4;
    while (l<n && r>0)
    {
        mid = l+(r-l)/2;
        if(arr[mid]==num) break;
        else if(arr[mid]<num) l = mid+1;
        else if(arr[mid]>num) r = mid-1;
    }
  
    if(l>=n||r<=0) printf("not exist :(");
   else  printf("position = %d",mid+1);
}