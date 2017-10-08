/* Program 7.1 A simple program using pointers */


#include <stdio.h>

int main(void)
{
    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2;
    num2 = num2 + 1;
    num2 = num2 + *pnum;


    pnum = &num2;
    *pnum = *pnum + 1;

    printf("\nnum1 = %ld num2= %ld *pnum = %ld *pnum + num2 = %ld\n", num1, num2, *pnum, *pnum + num2);


    return 0;
}
