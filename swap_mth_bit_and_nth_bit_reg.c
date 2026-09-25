//swap mth and nth bit using 32 bit reg;


#include <stdio.h>

int swap(int reg,int m,int n)
{
    int m_bit=0,n_bit=0;
    
    m_bit=(reg>>m)&1;
    n_bit=(reg>>n)&1;
    if(m_bit!=n_bit)
    {
        reg ^=(1<<m);
        reg ^=(1<<n);
    }
    return reg;
}

int main()
{
    int n=0x00000005;
    
    printf("0x%x",swap(n,3,2));
    return 0;
}
