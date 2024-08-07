#include<stdio.h>
void printArray(int arr[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}
int main()
int arr[];
{
    int arr[]={1,2,3,4,5};
    int n = sizeof arr()/sizeof(arr[0]);
    printArray(arr,n);
    return 0;
}