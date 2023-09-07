#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

int main(int argc, char* argv[])
{
    string array [MAX]; // this is where each value of argv is stored
    int count = argc - 1;

    if (count < 1)
    {
        printf("Exiting, as no arguments entered\n");
        return 0;
    }

    if (count == 1)
    {
        printf("Please enter 2 or more arguments\n");
        return 0;
    }

    printf("In order entered: ");
    for (int i = 1; i <= count; i++) // we iterate here to populate the array with each individual argument
    {
        array[i] = argv[i];
        printf("%s ", array[i]); // here they are simply printed in the order of the iteration
    }

    printf("\n");

    // this step can be performed without having to to the first bit
    printf("In reverse order: ");
    for (int j = count; 0 < j; j--) // if we start iterating from the end of the array and work backwards we can print the args in reverse order
    {
        array[j] = argv[j]; // we still need to store the arguments into the array (as before)
        printf("%s ", array[j]); // starting from the end and working backwards
    }

    printf("\n");

    return 0;

}
