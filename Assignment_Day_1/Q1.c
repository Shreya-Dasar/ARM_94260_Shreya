#include<stdio.h>
int count(unsigned int num)
{
    int count =0;
    while(num>0)
    {
        if(num&1)
        {
            count++;
        }
        num >>=1;
    }
    return count ;
}
int main()
{
    unsigned int number=13;
    printf("Number of  bits in %u :%d\n",number,count(number));
    return 0;
}