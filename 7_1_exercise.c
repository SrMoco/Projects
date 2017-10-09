/* Program 7.1 A simple program using pointers */


#include <stdio.h>

int main(void)
{
    int number = 0;
    int *pointer = NULL;

    number = 10;
    printf("\nnumber's adress: %p", &number);
    printf("\nnumber's value %d",number);
    printf("\nnumber's size %d bytes\n\n", sizeof(number));

    pointer =&number;

    printf("pointer's adress: %p", &pointer);
    printf("\npointer's size %d bytes", sizeof(pointer));
    printf("\npointer's value: %p", pointer);
    printf("\nvalue pointed to %d\n", *pointer);


    return 0;
}
