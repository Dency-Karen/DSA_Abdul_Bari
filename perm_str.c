#include<stdio.h>
void perm(char *s)
{
    int i=0,j=0,k=0;
    for(i=0;s[i]!='\0';i++)
    {
        
        for(j=0;s[j]!='\0';j++)
        {
           
            if(s[j]!=s[i])
            {
                printf("%c",s[i]);
                printf("%c",s[j]);
                for(k=0;s[k]!='\0';k++)
                {
                    if(s[k]!=s[j] && s[k]!=s[i])
                        printf("%c",s[k]);
                }
            }
            printf("\n");
        }
    }
}
int main()
{
    char str[]="abcd";
    perm(str);
}