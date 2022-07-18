#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int length=0;
char s1[17]="";
int c=0;
void len(char *s)
{
    int i=0,c=0;
    for(i=0;s[i]!='\0';i++)//length
    {
       
     
         length++;
    }
    //printf("%d",length);

}
void togg_Case(char *s)

{
    int i=0;
     for(i=0;s[i]!='\0';i++)//toggling cases
    {
        if(s[i] >= 65 && s[i] <=90)
            s[i]=s[i]+32;
        else 
            s[i]=s[i]-32;

    }
     printf("%s",s) ;
    
}
void upp_case(char *s)
{   int i=0;
    for(i=0;s[i]!='\0';i++)//to upper case
    {
        if(s[i] >= 65 && s[i] <=90)
            s[i]=s[i];
        else 
            s[i]=s[i]-32;

    }
}
void word_count(char *s)
{   int i=0;
      int sp=1;
    for(i=0;s[i]!=0;i++)//to find number of words
    {
        if ( s[i]==' ' && s[i-1]!=' ')
            sp++;

    }
    printf("%d",sp);
}
void reverse(char *s)
{
    int i=0;int nullc=0;
    
    //char s1[17]=" ";
    
    while(s[i]!='\0')
        {  
           i++;}

    i=i-1;
  
    int j=0;
    for(j=0;i>=0;i--,j++)
    {
         s1[j]=s[i];
         printf("%c \n",s1[j]);
    }
         s1[j]='\0';
    printf("%s \n",s);
   for(i=0;s1[i]!='\0';i++)
        printf("%c",s1[i]);
    
    

}
void reverse1(char *s)//reversal without new array 
{
    int i=0,j=0,len=0,temp=0;
    /*while(s[i]!='\0')
    {
        len++;
    }*/
    for(i=0,j=length-1;i<j;i++,j--)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    for(i=0;i<length;i++)
    {
        printf("%c",s[i]);
    }
}
void compare(char *s1,char *s2)
{
    int i=0,j=0,len1=0,len2=0;
    
    for(i=0,j=0;s1[i]!='\0'&& s2[j]!='\0';i++,j++)
    {
        if(s1[i]!=s2[j])
        {
            break;
        }
    }
    if(s1[i]==s2[j])
        printf("%s and %s are equal",s1,s2);
    else
    {
        if(s1[i]<s2[j])
            printf("%s is smaller \n",s1);
        else 
            printf("%s is smaller \n",s2);
    }      
    

}
void dupli(char *s)
{
    
    int i=0,c=0,d=0;

    int n[26]={0};
    for (i=0;i<26;i++)
    {
        n[i]=0;
    }
    for(i=0;s[i]!='\0';i++)
    {
        c=int(s[i])-65;
        n[c]++;
    }
    for(i=0;i<26;i++)
    {
        printf("%d",n[i]);
    }
    for(i=0;i<26;i++)
    {
        
        if (n[i]>1)
        {
            d=i+97;
            printf(" %c is repeated  \n",d);

        }
            
    }
}
void duplibit(char *s)//find duplicates using bitwise operations
{
    int i=0,x=0;
    long int h=0;
    
    for(i=0;s[i]!='\0';i++)

    {   
        x=1;
        x=x<<(s[i]-65);
        //printf("%c turn \n",s[i]);
        if((x & h)>=1)
           {
                printf("%c is repeated \n",s[i]);
           }
        else 
           { h=x | h;
             //printf("%c not repeated x is %d\n",s[i],x);
             }



        
    }
}
void anagram(char *s,char *s1)
{
    //long int n=0,h=0,x=0;
    int i=0,c=0,c1=0,x=0;
    char h[26]={0};
    for(int i=0;i<26;i++)
        h[i]=0;
    for(i=0;s[i]!='\0';i++)
    {
        
        c1=s[i]-65;
        h[c1]++;

    }
    //printf("%d",n);
    for(i=0;s1[i]!='\0';i++)
    {   

        
        c1=s1[i]-65;

        
        h[c1]--;
        if(h[c1]<0)
            {
                printf("not an anagram \n");
                break;
            }
    }
    if(s1[i]=='\0')
        printf("%s and %s are anagrams\n",s,s1);

}
void permutation(char *s,int k)
{
    int i=0,j=0;
    static int a[10]={0};
    //int a[10]={10};
    for(i =0;a[i]!='\0';i++)
        printf("%d\n",a[i]);
    static char re[10]="";
    i=0;
    if(s[k]=='\0')
    {
        re[k]='\0';
        printf("%s\n",re);
        k=0;
        
    }
        
    else 
    {
        for(i=0;s[i]!='\0';i++)
        {
        printf(" i is %d \n",i);    
        if(a[i]==0)
        {
            printf(" i is %d \n",i);
            re[k]=s[i];
            printf("k is %d \n",k);
            printf("re[k] is %c \n",re[k]);
            a[i]=1;
        
            permutation(s,k+1);
            a[i]=0;
            printf("a[i] changed to zero is is %d\n",i);
        }
        }
        
    }

}
void swap(char *a,char *b)
{
    char temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
void perm1(char *s,int l,int h )
{
    int i=0,temp=0;
    
    for(i=l;i<=h;i++)
    {
        if(l!=h)
        {   printf("i is %d ,l is %d,%c ,%c are swapped\n",i,l,s[i],s[l]);
            swap(&s[i],&s[l]);
            printf("calling recursive function with %s,%d,%d\n",s,l+1,h);
            perm1(s,l+1,h);
            printf("i is %d ,l is %d,%c ,%c are swapped\n",i,l,s[i],s[l]);
            swap(&s[i],&s[l]); 
            
        }
        else
        {
            printf("%s\n",s);
        }
    }

    
}

main()
{
    int i=0,c=0;
    
    char str[]="abc";
    
  
    /*char str1[]="natia";
    upp_case(str1);
    upp_case(str);
    printf("%s \n",str1);
    printf("%s \n",str);*/
    //len(str);
    perm1(str,0,2);
    //swap(&str[0],&str[2]);
    //printf("%s",str);

  

   
    


}
