//rotation of strings
#include<stdio.h>
#include<iostream>
#include<cstring>//string header file of c language
int main()
{
    char str[]="HELLO";
    char str1[]="ELLOH";
    rotate(str,str1);

    return 0;
}
bool rotate(char *str,char *str1)
{
    str.cat(str,str);
    if(strlen(str)==strlen(str1))
    {
        if (strstr(str,str1)!=NULL)
        { 
            return yes;

        }
    }
    else 
    return  no;
}