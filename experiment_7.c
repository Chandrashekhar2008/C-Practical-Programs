/*
--------------------------------------------------
Experiment No: 7
Experiment Name: Program to calculate the area of a circle

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to calculate the area of a circle.

Algorithm:
1. Start
2. Declare variable radius and area
3. Read value of radius
4. Calculate area = π * radius * radius
5. Display the area
6. End

Flowchart:
   Start
     |
 Input radius
     |
 area = π * r * r
     |
 Print area
     |
    End
*/

#include <stdio.h>

int main() {
    float radius, area;
    const float PI = 3.14159;

    printf("Enter radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("Area of the circle = %.2f\n", area);

    return 0;
}

/*
Output:
Enter radius of the circle: 7
Area of the circle = 153.94
*/
