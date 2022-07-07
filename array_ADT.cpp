#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<math.h>
void swap(int *x1,int *x2);
int Sum(struct Array arr1);
struct Array * Union1(struct Array *arr1,struct Array *arr2);

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
    --arr1.length;
}
void insert(struct Array *arr1,int x ,int pos)
{   int c=pos;
    int n=arr1->length;
    if (pos>=0 && pos<=arr1->length)
    {
        while(n>c)
        {
            arr1->a[n]=arr1->a[n-1];
            n--;

        }
        arr1->a[pos]=x;
        arr1->length++;

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
struct Array * Merge(struct Array *arr1,struct Array *arr2)//Merges two sorted arrays 
{
    int i,j,k;
    i=0;j=0;k=0;
    struct Array *crr;
    crr=new struct Array[20];
    crr->size=20;
    crr->length=arr1->length+arr2->length;
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            crr->a[k]=arr1->a[i];
            ++i;++k;
            //printf("%d is smaller than %d\n",arr1->a[i],arr2->a[j]);
        }
        else
        {
            crr->a[k]=arr2->a[j];
            ++j;++k;
            
            //printf("%d is smaller than %d\n",arr2->a[j],arr1->a[i]);
        }
        
    }
    for(;i<arr1->length;i++)
        crr->a[k++]=arr1->a[i];

     for(;j<arr2->length;j++)
        crr->a[k++]=arr2->a[j];
    return crr;

   
}
struct Array *Intersection(struct Array *arr1,struct Array *arr2)//Intersection two sorted arrays 
{
    int i,j,k;
    i=0;j=0;k=0;
    struct Array *crr;
    crr=new struct Array[20];
    crr->size=20;
    
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            
           
             ++i;
        }
        else if((arr1->a[i]>arr2->a[j]))
        {
           
           
            
             ++j;
        }
        else
            
        {
            crr->a[k]=arr1->a[i];
            
             
            }
        
        
    }
    crr->length=k;
   
    return crr;

   
}
struct Array *Diff(struct Array *arr1,struct Array *arr2)//difference of two arrays
{
    int i,j,k;
    i=0;j=0;k=0;
    struct Array *crr;
    crr=new struct Array[20];
    crr->size=20;
    
    
    while(i<arr1->length && j<arr2->length)
    {
        if((arr1->a[i]>arr2->a[j]))
        {
           
           
            
             ++j;++k;
        }
        
        else if (arr1->a[i]<arr2->a[j])
        {
            
            crr->a[k]=arr1->a[i];
             ++i;++k;
        }
        else
            
        {
           ++i;++j;
            
             
            }
       
        
        
    }
    for (;i<arr1->length;i++)
        crr->a[k]=arr1->a[i];
    crr->length=k;
   
    return crr;

   
}
struct Array * Union1(struct Array *arr1,struct Array *arr2)//Union two sorted arrays 
{
    int i,j,k;
    i=0;j=0;k=0;
    struct Array *crr;
    crr=new struct Array[20];
    crr->size=20;
    
    
    while(i<arr1->length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            crr->a[k]=arr1->a[i];
            ++i;++k;
            //printf("%d is smaller than %d\n",arr1->a[i],arr2->a[j]);
        }
        else if((arr1->a[i]>arr2->a[j]))
        {
            crr->a[k]=arr2->a[j];
            ++j;++k;
            
            //printf("%d is smaller than %d\n",arr2->a[j],arr1->a[i]);
        }
        else
            
        {
            crr->a[k]=arr1->a[i];
            ++i;++j;++k;
            }
        
    }
    
    for(;i<arr1->length;i++)
        crr->a[k++]=arr1->a[i];

     for(;j<arr2->length;j++)
        crr->a[k++]=arr2->a[j];
    crr->length=k;
    return crr;

   
}
int Mis_Element_single(struct Array arr1)
{ int i=0,sum=0,sum1=0,n=0;;
    for(i=0.;i<arr1.length;i++)
        sum=sum+arr1.a[i];
    printf("%d\n",sum);
    n=arr1.a[arr1.length-1] ;
    sum1=n*(n+1)/2;
     printf("%d\n",sum1);
    return (sum1-sum);
    

}
int_Mis_Element_single_2(struct Array arr1)
{
    int i=0,n=0;;
    n=arr1.a[0];
    for(i=1;i<arr1.length;i++)
    {
        if(arr1.a[i]-i!=n)
            return n+i;
    }
    return 0;
}
void Mis_mul(struct Array arr1)
{
    int i=0,n=0;;
    n=arr1.a[0];
    for(i=1;i<arr1.length;i++)
    {
        if(arr1.a[i]-i!=n)
        {
            while(n<arr1.a[i]-i)
           { printf("%d\n",i+n);
             ++n;
           }
        }
    }
}
void Mis_mul_2(struct Array arr1,int max,int min)
{
    int i=0,n=0;
    struct Array *arr3;
    n=min;
    

    arr3=new struct Array[20];
    arr3->length=max+1;
    for(i=0;i<arr3->length;i++)
        arr3->a[i]=0;
    for(i=0;i<arr1.length;i++)
    {
        
        {
           
           ++arr3->a[arr1.a[i]];
        }
    }
    for (i=min;i<arr3->length;i++)
    {
        if(arr3->a[i]==0)
            printf("%d\n",i);
    }
}
void dupli_unsorted(struct Array arr1)
{
    int i=0,j=0,count=0;
    for(i=0;i<arr1.length-1;i++)
    {
        count =1;
        if(arr1.a[i] >0)
        {
            for(j=i+1;j<arr1.length;j++)
            {
                if(arr1.a[i]==arr1.a[j])
                {
                
                    count++;
                    arr1.a[j]==-1;
                }
            }
        }
        if(count >1)
            printf("%d \n",arr1.a[i]);

    }
}
void find_pair(struct Array arr1,int sum1)
{
    int i=0,j=0,found=0,n=0;
    for(i=0;i<arr1.length-1;i++)
    {
        n=sum1-arr1.a[i];
        for(j=0;j<arr1.length;j++)
        {
            if(n==arr1.a[j])
                {
                    ++found;
                    printf("%d and %d \n",arr1.a[i],arr1.a[j]);
                    break;
                }
            if(found==1)
                break;

        }
    }
    if(found==0)
        printf("element not found");
}
void find_pair_1(struct Array arr1,int sum1)
{
    int i=0,found=0,j=0;
    for(i=0,j=arr1.length-1;i<j;)
    {
        if(arr1.a[i]+arr1.a[j]==sum1)
        {
            printf("%d and %d",arr1.a[i],arr1.a[j]);
            i++;
            j--;
        }
        else if (arr1.a[i]+arr1.a[j]<sum1)
        i++;
        else 
        j--;
    }
}
int string_len(struct Array arr1)
{
    int c=0,i=0;
    for(i=0;arr1.a[i]!='\0',i++)
        c++;
    return c;

}
int main()
{
    int x,index,ch,ans,sum;
    x=index=0;

    struct Array arr,brr;
    
    struct Array *crr;
    int n=0,i=0;
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
    
   do
 {
 printf("\n\nMenu\n");
 printf("1. Insert\n");
 printf("2. Delete\n");
 printf("3. Search\n");
 printf("4. Sum\n");
 printf("5. Display\n");
 printf("6. Missing Element single\n");
 printf("7.Duplicates in array\n");
 printf("8.Pair of elements in array");
 printf("9.Exit\n");

 printf("enter you choice ");
 scanf("%d",&ch);

 switch(ch)
 {
 case 1: printf("Enter an element and index");
 scanf("%d%d",&x,&index);
 insert(&arr,x,index);
 
 break;
 case 2: printf("Enter index ");
 scanf("%d",&index);
 delete1(arr,index);
 

 break;
 case 3:printf("Enter element to search ");
 scanf("%d",&x);
 index=Linear_Search(&arr,x);
 printf("Element index %d",index);
 break;
 case 4:printf("Sum is %d\n",Sum(arr));
 break;
 case 5:Display(arr);
 case 6:printf("the missing elements are  ");
 Mis_mul_2(arr,Max(arr),Min(arr));
case 7:dupli_unsorted(arr);
case 8:
printf("Enter a sum to check the array");
scanf("%d",&sum);
find_pair_1(arr,sum);

 }
 }while(ch<=8);
    


    

}
