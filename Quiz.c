#include <stdio.h>
#include <cs50.h>

void Bye (char a);

int main (void)
{
    char a = get_char("\nHello, this is the Truth Teller. Press y to continue or n to quit: ");

    if ( a == 'n' || a == 'N')
    {
        Bye(a);
        return 0;
    }

    printf("\nWhat's your favourite colour?\n");
    printf(" \n");
    printf("1.  RED\n");
    printf("2.  BLUE\n");
    printf("3.  GREEN\n");
    printf("4.  YELLOW\n");
    printf(" \n");
    int i = get_int("Enter number to answer: ");

    if (i == 1)
    {
        printf("\nYou are a fire demon\n");
    }
    if (i == 2)
    {
        printf("\nYou are a mermaid\n");
    }
    if (i == 3)
    {
        printf("\nYou are a goblin\n");
    }
    if (i == 4)
    {
        printf("\nyou are a bumblebee\n");
    }

    printf("\n");
    char b = get_char("\nAsk another question? (y/n): ");
    if (b == 'n' || b == 'N')
    {
        Bye(b);
        return 0;
    }

    printf("\nSorry, not got that far yet!\n\n");


}

void Bye (char a)
{
    if (a == 'n' || a == 'N')
    {
        printf("\nThat's sad. Bye\n\n");
    }
}
