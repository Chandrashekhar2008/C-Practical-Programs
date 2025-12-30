/*
--------------------------------------------------
Experiment No: 3
Experiment Name: Program to find sum of two numbers

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to find the sum of two numbers.

Algorithm:
1. Start
2. Declare variables a, b, sum
3. Read values of a and b
4. Calculate sum = a + b
5. Display the sum
6. End

Flowchart:
   Start
     |
 Input a, b
     |
 sum = a + b
     |
 Print sum
     |
    End
*/

#include <stdio.h>

int main() {
    int a, b, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    sum = a + b;

    printf("Sum of two numbers = %d\n", sum);

    return 0;
}

/*
Output:
Enter first number: 5
Enter second number: 7
Sum of two numbers = 12
*/
