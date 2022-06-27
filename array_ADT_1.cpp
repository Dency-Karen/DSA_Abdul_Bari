#include<iostream>
using namespace as std;
Class Array{
    private:  int *a;
        int size;
        int length;
        void swap(int *x1,int *x2);

    public :
Array()
{
   
    size =20;
    length=5;
    a=new int [size];

}
Array(sz)
{
    size=sz;
    length=5;
    a=new int[sz];
}
int Sum();
Array * Union1( Array *arr2);
void Display();
void delete1(int index);
void insert(int x ,int pos);
void append(int x);
int Linear_Search(int x);
int Binary_Search_loop(int x);
int Binary_Search_Recur(int l,int h,int x);




};




   
Array :: void Display()
{   int i=0;
    printf("the elements of the array are ");
    for (i=0;i<length;i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n ");
}
Array :: void delete1(int index)
{
    while(index<length && index>=0)
    {
        a[index]=a[index+1];
        index++;
    }
    length;
}
Array :: void insert(int x ,int pos)
{   int c=pos;
    int n=length;
    if (pos>=0 && pos<=length)
    {
        while(n>c)
        {
            a[n]=a[n-1];
            n--;

        }
        a[pos]=x;
        length++;

    }
    
    else
    {
        printf("Invalid operation \n");}
}
Array :: void append(int x)
{
    a[length]=x;
    length++;
}
Array :: int Linear_Search(int x)
{
    int i=0;int temp=0;
   for (i=0;i<length;i++) 
    {
        if (a[i]==x)
        {   swap(&a[0],&a[i]);
            return i;
        }    
    }
    return -1;
}
Array ::int Binary_Search_loop(int x)
{
    int l=0;
    int h=length-1;
    int mid=0;
    while(l<=h)
    {
        mid=(int)floor((l+h)/2);
        if(x==a[mid])
            return mid;
        if(x<a[mid])
            h=mid-1;
        if(x>a[mid])
            l=mid+1;
        
    }
    return -1;
}
Array :: int Binary_Search_Recur(int l,int h,int x)
{
        int mid=0;
        if(l<=h)
        {
         mid=(int)floor((l+h)/2);
        if(x==a[mid])
            return mid;
        else if(x<a[mid])
            return Binary_Search_Recur(l,mid-1,x);
        else if(x>arr1.a[mid])
           return Binary_Search_Recur(mid+1,h,x);
        }
    return -1;
        

}
Array :: void swap(int *x1,int *x2)
{
    int temp=*x1;
    *x1=*x2;
    *x2=temp;
}
Array ::int get(int index)
{
    if(index>=0 && index<length)
    {
        return a[index];
    }
    else 
     return -1;
}
Array ::void set(int index,int ele)
{
    if(index>=0 && index<arr1->length)
        a[index]=ele;
    else
        printf("Invalid Operation");
}
Array :: int Max()
{
    int i=0,max=0;
    max=a[0];

    for(i=1;i<length;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}
Array :: int Min()
{
    int i=0,min=0;
    min=a[0];

    for(i=1;i<length;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}
Array :: int Sum()
{
    int i=0,sum=0;

    for(i=0;i<length;i++)
    {
        sum=a[i]+sum;
    }
    return sum;
}
Array :: float Avg()
{   printf("%d ",Sum());
    printf("%d ",length);
    return (float)(Sum()/length);
}
Array :: void Reverse()
{
    int b[length];int i,j=0;
    for (i=length-1,j=0;i>=0,j<length;i--,j++)
    {
        b[j]=a[i];
    }
    for (i=0;i<length;i++)
    {
        a[i]=b[i];
    }
    
}
Array :: void Reverse_1()
{
    int i,j=0,temp=0;
    for (i=0,j=length-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
}
Array :: void Left_Shift()
{   int i=0;
    for(i=0;i<length;i++)
    {
        a[i]=a[i+1];
    }
    a[length-1]=0;
    
}
Array :: void Right_Shift()
{   int i=0;
    for(i=length-1;i>=0;i--)
    {
        a[i]=a[i-1];
    }
    a[0]=0;
    
}
Array :: void Insert_S(int x)//inserts element in sorted array based on the number
{
    int i=length-1;
    while((a[i])>x)//used to shift array until the correct index of ele  is reached
    {
        
            a[i+1]=a[i];
            i--;
    }
    a[i+1]=x;
        
       
    
    length++;
}
Array :: const char* sort_check(int n)//checks if array is sorted 
{
    int i=0;
    for(i=0;i<n-1;i++)
    {
        if ((a[i])>(a[i+1]))
                return "false";
    }
    return "true";
}
Array :: void sort_neg()
{
    int i =0;
    int j=length-1;
    while(i<j)
    {
        while(a[i]<0)
        {
            i++;
        }
        while(a[j]>=0)
        {
            j--;
        }

        if(i<j)
         { 
             swap(&a[i],&a[j]);
             }
        
    }
}
 Array :: Array * Merge( Array *arr2)//Merges two sorted arrays 
{
    int i,j,k;
    i=0;j=0;k=0;
    Array *crr;
    crr= new  Array(length+arr2->length;);
   
    
    
    while(i<length && j<length)
    {
        if(a[i]<a[j])
        {
    
            a[k]=a[i];
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
    for(;i<length;i++)
        crr->a[k++]=a[i];

     for(;j<arr2->length;j++)
        crr->a[k++]=arr2->a[j];
    return crr;

   
}
Array *Intersection(Array *arr2)//Intersection two sorted arrays 
{
    int i,j,k;
    i=0;j=0;k=0;
     Array *crr;
    crr=new  Array[20];
    crr->size=20;
    
    
    while(i<length && j<arr2->length)
    {
        if(a[i]<arr2->a[j])
        {
            
           
             ++i;
        }
        else if((a[i]>arr2->a[j]))
        {
           
           
            
             ++j;
        }
        else
            
        {
            crr->a[k]=a[i];
            
             
            }
        
        
    }
    crr->length=k;
   
    return crr;

   
}
 Array *Diff( Array *arr2)//difference of two arrays
{
    int i,j,k;
    i=0;j=0;k=0;
   Array *crr;
    crr=new  Array[20];
    crr->size=20;
    
    
    while(i<length && j<arr2->length)
    {
        if((a[i]>arr2->a[j]))
        {
           
           
            
             ++j;++k;
        }
        
        else if (a[i]<arr2->a[j])
        {
            
            crr->a[k]=a[i];
             ++i;++k;
        }
        else
            
        {
           ++i;++j;
            
             
            }
       
        
        
    }
    for (;i<length;i++)
        crr->a[k]=a[i];
    crr->length=k;
   
    return crr;

   
}
 Array * Union1(Array *arr2)//Union two sorted arrays 
{
    int i,j,k;
    i=0;j=0;k=0;
    Array *crr;
    crr=new Array[20];
    crr->size=20;
    
    
    while(i<length && j<arr2->length)
    {
        if(arr1->a[i]<arr2->a[j])
        {
            crr->a[k]=a[i];
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
            crr->a[k]=a[i];
            ++i;++j;++k;
            }
        
    }
    
    for(;i<length;i++)
        crr->a[k++]=a[i];

     for(;j<arr2->length;j++)
        crr->a[k++]=arr2->a[j];
    crr->length=k;
    return crr;

   
}

int main()
{
    int x,index,ch;
    x=index=0;

    Array arr,brr;
    
    Array *crr;
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
 printf("6.Exit\n");

 printf("enter you choice ");
 scanf("%d",&ch);

 switch(ch)
 {
 case 1: printf("Enter an element and index");
 scanf("%d%d",&x,&index);
 insert(arr,x,index);
 
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

 }
 }while(ch<6);
    
    

    

}
