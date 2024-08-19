#include<stdio.h>


void merge(int arr1[],int n1,int arr2[],int n2,int arr3[])
{
    int i = 0, j =0;
    while (i<n1)
    {
        arr3[i] = arr1[i];
        i++;
    }
    while (j<n2)
    {
        arr3[i] = arr2[j];
        j++;
        i++;
    }
    
}
int main(void)
{
    int arr_1[4]={1,2,3,4}, arr_2[3]={5,6,7}, arr_3[10000]={0};
    int lenght_of_thirdone = 4+3 ;

    merge(arr_1,4,arr_2,3,arr_3);
    
    for (size_t i = 0; i < lenght_of_thirdone; i++)
    {
        printf("%d ",arr_3[i]);
    }
    return 0;
}