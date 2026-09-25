#include <stdio.h>
void revstr(char *sp,char *dp);
int main()
{
    int i=0,j=0;
   char src[]="Hello";
   char dst[6];

    char *sp=src;
    char *dp=dst;
    // printf(" sstring %s\n",dp);
   revstr(src,dst); 
        printf(" sstring %s\n",dp);
    return 0;
}


void revstr(char *sp,char *dp)
{   int i=0,j=0;
    for(i=0;sp[i]!='\0';i++);
    i=i-1;
        while(j<=i)
        {
          printf("%d %c\n",j,dp[j]);
          dp[j]=sp[j];
            j++;
        }
        printf("%s",dp);
}
