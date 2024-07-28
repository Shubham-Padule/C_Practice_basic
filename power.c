#include <stdio.h>

// Function prototype for power function
int power(int x, int y);

int main()
{
    int x, y, p;

    // Prompt the user for input
    printf("Enter two integers x and y: ");
    scanf("%d %d", &x, &y);

    // Calculate power
    p = power(x, y);

    // Display the result
    printf("power = %d\n", p);

    return 0;
}

// Function to calculate x raised to the power y
int power(int x, int y)
{
    if (y == 0)
        return 1;
    else
        return x * power(x, y - 1);
}
