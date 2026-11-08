#include <stdio.h>

int main()
{
    int image[3][3];

    // Pointer to an array of 3 integers
    int (*ptr)[3] = image;

    int i, j;

    printf("Enter 9 image pixel values:\n");

    // Taking input
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", (*(ptr + i) + j));
        }
    }

    // Increasing brightness
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            *(*(ptr + i) + j) =
            *(*(ptr + i) + j) * 2;
        }
    }

    // Displaying updated image
    printf("\nUpdated Image Matrix:\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", *(*(ptr + i) + j));
        }

        printf("\n");
    }

    return 0;
}
