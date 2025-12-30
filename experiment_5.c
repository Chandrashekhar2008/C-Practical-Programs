/*
--------------------------------------------------
Experiment No: 5
Experiment Name: Program demonstrating data types and format specifiers

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to demonstrate different data types and format specifiers.

Algorithm:
1. Start
2. Declare variables of different data types
3. Assign values to variables
4. Print values using appropriate format specifiers
5. End

Flowchart:
   Start
     |
 Declare variables
     |
 Assign values
     |
 Print values
     |
    End
*/

#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'A';
    double d = 25.5678;

    printf("Integer value: %d\n", i);
    printf("Float value: %.2f\n", f);
    printf("Character value: %c\n", c);
    printf("Double value: %.4lf\n", d);

    return 0;
}

/*
Output:
Integer value: 10
Float value: 3.14
Character value: A
Double value: 25.5678
*/
