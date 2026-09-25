//check msb bit position in given 32 bit regisster


#include <stdio.h>

void find_set_bitNUM(int reg)
{
    int i=0,pos=0;
    
    for(i=31;i>=0;i--)
    {
        pos=reg&(1<<i) ;
        if( pos!=0 )
        {
            printf("set %d bit pos\n",i);
        }
        
    }
}

int main()
{
    int i=0,pos=0;
    int n=0x0000000f;
    find_set_bitNUM(n);
    // printf("0x%x",swap(n,3));
    return 0;
}
