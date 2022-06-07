#include<stdio.h>
#include<stdlib.h>
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
void insert(struct Array arr1,int x ,int pos)
{   int c=pos;
    int n=arr1.length;
    while(n!=c)
    {
        arr1.a[n]=arr1.a[n-1];
        n--;

    }
    arr1.a[pos]=x;

}
void append(struct Array arr1,int x)
{
    arr1.a[arr1.length]=x;
    arr1.length++;
}

int main()
{
    struct Array arr;
    int n=0,i=0;
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
    Display(arr);
    append(arr,6);
    printf("%d",arr.length);
    

    

}