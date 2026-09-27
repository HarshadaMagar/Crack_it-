#include <stdio.h>
#include <math.h>

int main()
{
    float r, length, breadth;
    float a, b, c, s;
    float circle_area, circle_perimeter;
    float rectangle_area, rectangle_perimeter;
    float triangle_area;

    printf("Enter radius of circle: ");
    scanf("%f", &r);

    circle_area = 3.14159 * r * r;
    circle_perimeter = 2 * 3.14159 * r;

    printf("\nCircle Area = %.2f", circle_area);
    printf("\nCircle Perimeter = %.2f", circle_perimeter);


    printf("\n\nEnter length of rectangle: ");
    scanf("%f", &length);

    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);

    rectangle_area = length * breadth;
    rectangle_perimeter = 2 * (length + breadth);

    printf("\nRectangle Area = %.2f", rectangle_area);
    printf("\nRectangle Perimeter = %.2f", rectangle_perimeter);

   
    printf("\n\nEnter three sides of triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    s = (a + b + c) / 2;

    triangle_area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("\nTriangle Area = %.2f", triangle_area);

    return 0;
}
