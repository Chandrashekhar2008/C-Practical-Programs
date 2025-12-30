/*
--------------------------------------------------
Experiment No: 6
Experiment Name: Program to swap two numbers using variables and pointers

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to swap two numbers using variables and pointers.

Algorithm:
1. Start
2. Declare two variables a and b
3. Swap values using a temporary variable
4. Swap values using pointers
5. Display results
6. End

Flowchart:
   Start
     |
 Input a, b
     |
 Swap using temp
     |
 Swap using pointers
     |
 Display result
     |
    End
*/

#include <stdio.h>

int main() {
    int a, b, temp;
    int *p, *q;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    /* Swapping using temporary variable */
    temp = a;
    a = b;
    b = temp;

    printf("\nAfter swapping using variables:\n");
    printf("a = %d, b = %d\n", a, b);

    /* Swapping using pointers */
    p = &a;
    q = &b;

    temp = *p;
    *p = *q;
    *q = temp;

    printf("\nAfter swapping using pointers:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}

/*
Output:
Enter first number: 4
Enter second number: 9

After swapping using variables:
a = 9, b = 4

After swapping using pointers:
a = 4, b = 9
*/
