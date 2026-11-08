#include <stdio.h>

// Generic function for displaying sensor data
void printSensorData(void *data, char type)
{
    if (type == 'f')
    {
        float *ptr = (float *)data;

        printf("\nTemperature: %.2f Celsius", *ptr);
    }
    else if (type == 'i')
    {
        int *ptr = (int *)data;

        if (*ptr == 1)
        {
            printf("\nMotion Detected");
        }
        else
        {
            printf("\nNo Motion");
        }
    }
    else if (type == 'c')
    {
        char *ptr = (char *)data;

        if (*ptr == 'O')
        {
            printf("\nDoor Open");
        }
        else
        {
            printf("\nDoor Closed");
        }
    }
}

int main()
{
    float temperature;
    int motion;
    char door;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &temperature);

    printf("Enter motion status (1 = Yes, 0 = No): ");
    scanf("%d", &motion);

    printf("Enter door status (O = Open, C = Closed): ");
    scanf(" %c", &door);

    // Displaying all sensor readings
    printf("\n----- Smart Home Sensor Readings -----\n");

    printSensorData(&temperature, 'f');

    printSensorData(&motion, 'i');

    printSensorData(&door, 'c');

    return 0;
}
