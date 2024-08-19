#include<stdio.h>

int binary_search(int arr[],int n,int num,int l ,int r) 
{
    int mid = l+(r-l)/2;
 
  if(arr[mid]==num) return mid;
  else if(l==r || r<0 || l>=n) return -1;
  else if(arr[mid]>num) binary_search(arr,n,num,l,mid-1);
  else if(arr[mid]<num) binary_search(arr,n,num,mid+1,r);
  
  

}

int main(void)
{
  // array must be sorted 
    int arr[5]={1,2,3,4,5};
    int pos =binary_search(arr,5,5,0,4);
     
     if(pos != -1) printf("position = %d",pos+1);
     else printf("Not exist :(");
     return 0;
}