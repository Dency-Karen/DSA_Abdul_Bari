#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="abba";
    int low,high,start=0,maxlength=1;
    int i,j;
    int len=strlen(str);
    for(i=1;i<len;i++)//using strlen is a function time complexity increases ,hence use variable
    {
        //if(i>0 && i!=len-2)
        {
            if(str[i]==str[i-1])
            {   
                low=i-1
                high=i;
                while(low>=0 && high<len&& str[low-1]==str[high-1])
                {
                    low=low-1;
                    high=high+1;
                }
                if(high-low+1>maxlength)
                {
                    start=low;
                    maxlength=high-low+1;
                }
            
            }
            if(str[i-1]==str[i+1])
            {
                low=i-1;
                high=i+1;
                while(low>0 && high<len && str[low-1] && str[high+1])
                {
                    low--;
                    high++;
                }
                if(high-low+1>maxlength)
                {
                    start=low;
                    maxlength=high-low+1;
                }
            }
        }
        
        
    }
    printf("%d,%d",start,maxlength);

}