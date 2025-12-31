/*
--------------------------------------------------
Experiment No: 9
Experiment Name: Program to find the maximum of three numbers

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to find the maximum of three numbers.

Algorithm:
1. Start
2. Declare three integer variables a, b, c
3. Read values of a, b, and c
4. Compare values to find the largest
5. Display the maximum number
6. End

Flowchart:
   Start
     |
 Input a, b, c
     |
 a > b and a > c ?
   /          \
 Yes          No
  |            |
Print a     b > c ?
              /   \
           Yes     No
            |       |
         Print b  Print c
               \   /
                End
*/

#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    printf("Enter third number: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("%d is the maximum number\n", a);
    } else if (b >= a && b >= c) {
        printf("%d is the maximum number\n", b);
    } else {
        printf("%d is the maximum number\n", c);
    }

    return 0;
}

/*
Output:
Enter first number: 4
Enter second number: 9
Enter third number: 2
9 is the maximum number
*/
