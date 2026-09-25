//Write the value 67 into bits 8 through 16, without changing any other bits.

#include <stdio.h>

int set_reg(int reg,int start, int end)
{
    int mask=0;
    
    mask = ( (0x1 << (end-start+1))-1)  << start;
    reg &=~mask;
    reg |= 67 <<start;
    return reg;
}


int main()
{
    
    int n=0x12345678;
    printf("0x%x",set_reg(n,8,16));
    
    return 0;
}
