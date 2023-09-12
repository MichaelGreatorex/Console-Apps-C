#include <stdio.h>
#include <cs50.h>
#include <string.h>

int get_sum(int times2);

int main(void)
{
    char userinput[150];
    int charindex;
    int subindex;
    int i;


        printf("Enter Credit Card number: ");
        fgets(userinput, sizeof userinput, stdin);

        for (charindex = 0; userinput[charindex] != '\0'; ++charindex)
        {
            while (!((userinput[charindex] >= '0' && userinput[charindex] <= '9') || userinput[charindex] == '\0'))
            {
                for (subindex = charindex; userinput[subindex] != '\0'; ++subindex)
                {
                    userinput[subindex] = userinput[subindex + 1];
                }
                userinput[subindex] = '\0';

            }
        }

        i = 0;
        while (userinput[i] != '\0')
        {
            i++;
        }



    int number[16];
    number[15] = userinput[15] - '0';
    number[14] = userinput[14] - '0';
    number[13] = userinput[13] - '0';
    number[12] = userinput[12] - '0';
    number[11] = userinput[11] - '0';
    number[10] = userinput[10] - '0';
    number[9] = userinput[9] - '0';
    number[8] = userinput[8] - '0';
    number[7] = userinput[7] - '0';
    number[6] = userinput[6] - '0';
    number[5] = userinput[5] - '0';
    number[4] = userinput[4] - '0';
    number[3] = userinput[3] - '0';
    number[2] = userinput[2] - '0';
    number[1] = userinput[1] - '0';
    number[0] = userinput[0] - '0';

    int times2[16];
    times2[15] = number[15]*2;
    times2[14] = number[14]*2;
    times2[13] = number[13]*2;
    times2[12] = number[12]*2;
    times2[11] = number[11]*2;
    times2[10] = number[10]*2;
    times2[9] = number[9]*2;
    times2[8] = number[8]*2;
    times2[7] = number[7]*2;
    times2[6] = number[6]*2;
    times2[5] = number[5]*2;
    times2[4] = number[4]*2;
    times2[3] = number[3]*2;
    times2[2] = number[2]*2;
    times2[1] = number[1]*2;
    times2[0] = number[0]*2;

    if (i == 16 && userinput[0] == '5' && userinput[1] >= '1' && userinput[1] <= '5') //Mastercard check
    {
        int sum1 = number[15] + number[13] + number[11] + number[9] + number[7] + number[5] + number[3] + number[1];
        int sum2 = times2[14] + times2[12] + times2[10] + times2[8] + times2[6] + times2[4] + times2[2] + times2[0];
        int sum3 = get_sum(times2[14]) + get_sum(times2[12]) + get_sum(times2[10]) + get_sum(times2[8]) + get_sum(times2[6]) + get_sum(times2[4]) + get_sum(times2[2]) + get_sum(times2[0]);
        int checksum = sum1 + sum3;
        int final = checksum % 10;

        if (final == 0)
        {
            printf("MASTERCARD\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (i == 16 && userinput[0] == '4') // VISA check
    {
        int sum1 = number[15] + number[13] + number[11] + number[9] + number[7] + number[5] + number[3] + number[1];
        int sum2 = times2[14] + times2[12] + times2[10] + times2[8] + times2[6] + times2[4] + times2[2] + times2[0];
        int sum3 = get_sum(times2[14]) + get_sum(times2[12]) + get_sum(times2[10]) + get_sum(times2[8]) + get_sum(times2[6]) + get_sum(times2[4]) + get_sum(times2[2]) + get_sum(times2[0]);
        int checksum = sum1 + sum3;
        int final = checksum % 10;

        if (final == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }

    }
    else if (i == 15 && userinput[0] == '3' && (userinput[1] == '4' || userinput[1] == '7')) //American Express check
    {
        int sum1 = number[14] + number[12] + number[10] + number[8] + number[6] + number[4] + number[2] + number[0];
        int sum2 = times2[13] + times2[11] + times2[9] + times2[7] + times2[5] + times2[3] + times2[1];
        int sum3 = get_sum(times2[13]) + get_sum(times2[11]) + get_sum(times2[9]) + get_sum(times2[7]) + get_sum(times2[5]) + get_sum(times2[3]) + get_sum(times2[1]);
        int checksum = sum1 + sum3;
        int final = checksum % 10;

        if (final == 0)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else if (i == 13 && userinput[0] == '4') // VISA check
    {
        int sum1 = number[12] + number[10] + number[8] + number[6] + number[4] + number[2] + number[0];
        int sum2 = times2[11] + times2[9] + times2[7] + times2[5] + times2[3] + times2[1];
        int sum3 = get_sum(times2[11]) + get_sum(times2[9]) + get_sum(times2[7]) + get_sum(times2[5]) + get_sum(times2[3]) + get_sum(times2[1]);
        int checksum = sum1 + sum3;
        int final = checksum % 10;

        if (final == 0)
        {
            printf("VISA\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("\nINVALID\n");
    }
    return 0;
}

int get_sum(int times2)
{
    int remainder;
    int sum = 0;

    while (times2 != 0)
    {
        remainder = times2 % 10;
        sum = sum + remainder;
        times2 = times2 / 10;
    }
    return sum;
}
