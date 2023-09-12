#include <cs50.h>
#include <stdio.h>
#include <string.h>

#define MAX 9

int main(int argc, char* argv[])
{
    string strings[] = {argv[1], argv[2], argv[3], argv[4], argv[5], argv[6], argv[7], argv[8], argv[9]};

    printf("%i names have been entered and stored\n", argc - 1);

    if (argc - 1 > MAX)
    {
        printf("Maximum number of names I can store is %i\n", MAX);
        return 1;
    }

    if (argc - 1 == 2)
    {
        printf("Minimum number of names I can is 3\n");
        return 2;
    }

    // Search for string

    string a = get_string("Enter name to search: ");
    for (int i = 1; i <= 9; i++)
    {
        if (strcmp(strings[i], a) == 0)
        {
            printf("Found\n");
            return 3;
        }
        else if (strcmp(strings[i], a) != 0)
        {
            printf("Not found\n");
            return 4;
        }
    }

}
