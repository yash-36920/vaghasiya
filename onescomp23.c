#include<stdio.h>
int main()
{
    unsigned int num;
    printf("Enter a Number :");
    scanf("%u",&num);

    unsigned int onescomp = ~num & 0xFFFF;

    printf("Ones Complement is : %u\n",onescomp);
    return 0;
}
