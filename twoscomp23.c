#include<stdio.h>
int main()
{
    unsigned int num,twoscomp;
    char binary[17];

    printf("Enter a Number :");
    scanf("%u", &num);
    if(num>65535)
    {
        printf("Please enter a Number in Range!");
        return 1;
    }
    twoscomp= (~num + 1) & 0xFFFF;

    printf("Original No. : %u\n",num);
    printf("Two's Complement : %u\n", twoscomp);
    for(int i=15;i>=0;i--)
    {
        binary[15-i]=(twoscomp & (1<<i)) ? '1' : '0';

    }
    binary[16]='\0';
    for(int j=0;j<=16;j++)
    {
        printf("%c",binary[j]);
    }
    //printf(Binary in 2's comp : %s\n", binary);
    return 0;

}
