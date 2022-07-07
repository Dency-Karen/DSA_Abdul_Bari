#include<stdio.h>
#include<stdlib.h>
int length=0;
char s1[17]="";
void len(char *s)
{
    int i=0,c=0;
    for(i=0;s[i]!='\0';i++)//length
    {
       
     
         length++;
    }
    printf("%d",length);

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
main()
{
    int i=0,c=0;
    
    char str[]="My name is dency";
    
  
    char str1[]="mmaaddyy";
    upp_case(str1);
    printf("%s",str1);
    dupli(str1);

  

   
    


}
