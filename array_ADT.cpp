#include<stdio.h>
#include<stdlib.h>
#include<iostream>
struct Array{
        int *a;
        int size;
        int length;
    };
   
void Display(struct Array arr1)
{   int i=0;
    printf("the elements of the array are ");
    for (i=0;i<arr1.length;i++)
        {
            printf("%d ",arr1.a[i]);
        }
        printf("\n ");
}
void delete1(struct Array &arr1,int index)
{
    while(index<arr1.length && index>=0)
    {
        arr1.a[index]=arr1.a[index+1];
        index++;
    }
    arr1.length--;
}
void insert(struct Array &arr1,int x ,int pos)
{   int c=pos;
    int n=arr1.length;
    if (pos>=0 && pos<=arr1.length)
    {
        while(n>c)
        {
            arr1.a[n]=arr1.a[n-1];
            n--;

        }
        arr1.a[pos]=x;
        arr1.length++;

    }
    
    else
    {
        printf("Invalid operation \n");}
}
void append(struct Array &arr1,int x)
{
    arr1.a[arr1.length]=x;
    arr1.length++;
}

int main()
{
    struct Array arr;
    int n=0,i=0,newno=0;
    printf("Enter the size of an array");
    scanf("%d",&arr.size);
    arr.length=0;
    arr.a=(int *)malloc(arr.size*sizeof(int));
    printf("Enter the no of elements in  the array");
    scanf("%d",&n);
    arr.length=n;
    
    printf("Enter the elements of the array");
    for(i=0;i<n;i++)
            {
                scanf("%d",&arr.a[i]);
            }
   
    delete1(arr,3);
    Display(arr);
    printf("the length of the array is %d",arr.length);

    
    

    

}
