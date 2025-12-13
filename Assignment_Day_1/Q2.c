
#include<stdio.h>
void print_bin(void *vp, int size);
void main()
{
    
unsigned char ch=10;
print_bin(&ch,sizeof(ch));

}
void print_bin(void *vp,int size)
{
   
   int i;

    for(i = size - 1; i >= 0; i--)
    {
        unsigned char mask=0x80;
    while(mask)
    {
             if( *((char *)vp ) & mask )
        {
            printf("1");
        }
        else
        {
            printf("0");
        }
         mask = mask >> 1; 
    }
    }
}
