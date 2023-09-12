#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX_OPTIONS 9
#define MAX_VOTERS 10

typedef struct
{
    string name;
    int votes;
}
item;

int number_of_items;
int number_of_voters;
item options[MAX_OPTIONS];

bool match(string favourite);

int main(int argc, string argv[])
{
    if (argc - 1 <= 1)
    {
        printf("Please enter at least 2 names\n");
        return 2;
    }
    // enter options as arguments
    number_of_items = argc - 1;
    for (int i = 1; i <= number_of_items; i++)
    {
        options[i].name = argv[i];
        printf("Option %i is %s\n", i, options[i].name);
    }

    number_of_voters = get_int("How many voters? ");

    for (int j = 1; j <= number_of_voters; j++)
    {
        string favourite;
        do    // keep prompting until listed name is entered
        {
            // ask user their favourite
            favourite = get_string("Voter %i What is your favourite? ", j);
            if (!match(favourite))
                {
                    printf("Not Found\n");
                }
        }
        while (!match(favourite));

        printf("Found\n");

    }

    for (int i = 1; i <= number_of_items; i++)
    {
        printf("%s scored %i votes\n", options[i].name, options[i].votes / 2);
    }

        int highest = 0;

    for (int i = 0; i < number_of_items; i++)
    {
        if (options[i].votes > highest)
        {
            highest = options[i].votes;
        }
    }

    for (int i = 0; i < number_of_items; i++)
    {
        if (highest == options[i].votes)
        {
            printf("%s is the favourite\n", options[i].name);
        }
    }
}

bool match(string favourite)
{
    // TODO
    for (int i = 1; i <= number_of_items; i++)
    {
       if (strcmp(options[i].name, favourite) == 0)
       {
            options[i].votes++;
            return true;
       }

    }
    return false;
}
