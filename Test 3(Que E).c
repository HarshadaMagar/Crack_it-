#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];
    int A = 0, B = 0, C = 0, F = 0;
    int sum = 0;

    // Read marks with validation
    for(i = 0; i < n; i++)
    {
        do
        {
            printf("Enter marks of student %d: ", i);
            scanf("%d", &marks[i]);

            if(marks[i] < 0 || marks[i] > 100)
                printf("Invalid, re-enter\n");

        } while(marks[i] < 0 || marks[i] > 100);

        sum += marks[i];

        // Grade counting
        if(marks[i] >= 80)
            A++;
        else if(marks[i] >= 60)
            B++;
        else if(marks[i] >= 40)
            C++;
        else
            F++;
    }

    // Highest and lowest
    int highest = marks[0], lowest = marks[0];
    int highIndex = 0, lowIndex = 0;

    for(i = 1; i < n; i++)
    {
        if(marks[i] > highest)
        {
            highest = marks[i];
            highIndex = i;
        }

        if(marks[i] < lowest)
        {
            lowest = marks[i];
            lowIndex = i;
        }
    }

    float average = (float)sum / n;

    printf("\nGrade Count:\n");
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);
    printf("F = %d\n", F);

    printf("\nHighest Mark = %d at index %d\n", highest, highIndex);
    printf("Lowest Mark = %d at index %d\n", lowest, lowIndex);

    printf("Class Average = %.2f\n", average);

    printf("Students scoring above average:\n");
    for(i = 0; i < n; i++)
    {
        if(marks[i] > average)
            printf("%d ", i);
    }

    return 0;
}
