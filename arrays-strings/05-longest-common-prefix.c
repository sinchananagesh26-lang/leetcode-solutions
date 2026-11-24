#include <stdio.h>
#include <string.h>

int main()
{
    char strs[3][20] = {"dog", "racecar", "car"};
    char prefix[20];

    int i = 0;
    int j;

    while (strs[0][i] != '\0')
    {
        char ch = strs[0][i];

        for (j = 1; j < 3; j++)
        {
            if (strs[j][i] != ch)
            {
                break;
            }
        }

        if (j < 3)
        {
            break;
        }

        prefix[i] = ch;
        i++;
    }

    prefix[i] = '\0';

    printf("Longest Common Prefix: %s\n", prefix);

    return 0;
}