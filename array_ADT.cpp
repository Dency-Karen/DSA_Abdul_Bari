#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
void swap(int *x1,int *x2);
int Sum(struct Array arr1);
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
int Linear_Search(struct Array *arr1,int x)
{
    int i=0;int temp=0;
   for (i=0;i<arr1->length;i++) 
    {
        if (arr1->a[i]==x)
        {   swap(&arr1->a[0],&arr1->a[i]);
            return i;
        }    
    }
    return -1;
}
int Binary_Search_loop(struct Array arr1,int x)
{
    int l=0;
    int h=arr1.length-1;
    int mid=0;
    while(l<=h)
    {
        mid=(int)floor((l+h)/2);
        if(x==arr1.a[mid])
            return mid;
        if(x<arr1.a[mid])
            h=mid-1;
        if(x>arr1.a[mid])
            l=mid+1;
        
    }
    return -1;
}
int Binary_Search_Recur(struct Array arr1,int l,int h,int x)
{
        int mid=0;
        if(l<=h)
        {
         mid=(int)floor((l+h)/2);
        if(x==arr1.a[mid])
            return mid;
        else if(x<arr1.a[mid])
            return Binary_Search_Recur(arr1,l,mid-1,x);
        else if(x>arr1.a[mid])
           return Binary_Search_Recur(arr1,mid+1,h,x);
        }
    return -1;
        

}
void swap(int *x1,int *x2)
{
    int temp=*x1;
    *x1=*x2;
    *x2=temp;
}
int get(struct Array arr1,int index)
{
    if(index>=0 && index<arr1.length)
    {
        return arr1.a[index];
    }
    else 
     return -1;
}
void set(struct Array *arr1,int index,int ele)
{
    if(index>=0 && index<arr1->length)
        arr1->a[index]=ele;
    else
        printf("Invalid Operation");
}
int Max(struct Array arr1)
{
    int i=0,max=0;
    max=arr1.a[0];

    for(i=1;i<arr1.length;i++)
    {
        if(arr1.a[i]>max)
            max=arr1.a[i];
    }
    return max;
}
int Min(struct Array arr1)
{
    int i=0,min=0;
    min=arr1.a[0];

    for(i=1;i<arr1.length;i++)
    {
        if(arr1.a[i]<min)
            min=arr1.a[i];
    }
    return min;
}
int Sum(struct Array arr1)
{
    int i=0,sum=0;

    for(i=0;i<arr1.length;i++)
    {
        sum=arr1.a[i]+sum;
    }
    return sum;
}
float Avg(struct Array arr1)
{   printf("%d ",Sum(arr1));
    printf("%d ",arr1.length);
    return (float)(Sum(arr1)/arr1.length);
}
void Reverse(struct Array *arr1)
{
    int b[arr1->length];int i,j=0;
    for (i=arr1->length-1,j=0;i>=0,j<arr1->length;i--,j++)
    {
        b[j]=arr1->a[i];
    }
    for (i=0;i<arr1->length;i++)
    {
        arr1->a[i]=b[i];
    }
    
}
void Reverse_1(struct Array *arr1)
{
    int i,j=0,temp=0;
    for (i=0,j=arr1->length-1;i<j;i++,j--)
    {
        temp=arr1->a[i];
        arr1->a[i]=arr1->a[j];
        arr1->a[j]=temp;
    }
}
void Left_Shift(struct Array *arr1)
{   int i=0;
    for(i=0;i<arr1->length;i++)
    {
        arr1->a[i]=arr1->a[i+1];
    }
    arr1->a[arr1->length-1]=0;
    
}
void Right_Shift(struct Array *arr1)
{   int i=0;
    for(i=arr1->length-1;i>=0;i--)
    {
        arr1->a[i]=arr1->a[i-1];
    }
    arr1->a[0]=0;
    
}
void Insert_S(struct Array *arr1,int x)//inserts element in sorted array based on the number
{
    int i=arr1->length-1;
    while((arr1->a[i])>x)//used to shift array until the correct index of ele  is reached
    {
        
            arr1->a[i+1]=arr1->a[i];
            i--;
    }
    arr1->a[i+1]=x;
        
       
    
    arr1->length++;
}
const char* sort_check(struct Array arr1,int n)//checks if array is sorted 
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        if ((arr1.a[i])>(arr1.a[i+1]))
                return "false";
    }
    return "true";
}
void sort_neg(struct Array *arr1)
{
    int i =0;
    int j=arr1->length-1;
    while(i<j)
    {
        while(arr1->a[i]<0)
        {
            i++;
        }
        while(arr1->a[j]>=0)
        {
            j--;
        }

        if(i<j)
         { 
             swap(&arr1->a[i],&arr1->a[j]);
             }
        
    }
}



int main()
{
    struct Array arr;
    int n=0,i=0,newno=0,x=0,s=0;
    printf("Enter the size of an array");
    scanf("%d",&arr.size);
    arr.length=0;
    arr.a=(int *)malloc(arr.size*sizeof(int));
    printf("Enter the no of elements in  the array");
    scanf("%d",&n);
    arr.length=n;
    
    printf("Enter the elements of the array\n");
    for(i=0;i<n;i++)
            {
                scanf("%d",&arr.a[i]);
            }
   
  
    Display(arr);
    printf("the length of the array is %d \n",arr.length);
   
    //s=get(arr,x);
    //if(s=-1)
     //   printf("invalid opearation");
    //else
      //  printf("the element at the index is %d",s);
  
  sort_neg(&arr);
  Display(arr);
  

    
    

    

}
