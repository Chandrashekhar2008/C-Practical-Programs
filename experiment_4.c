/*
--------------------------------------------------
Experiment No: 4
Experiment Name: Program to find the largest of two numbers

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to find the largest of two numbers.

Algorithm:
1. Start
2. Declare two variables a and b
3. Read values of a and b
4. If a > b, print a is largest
5. Else, print b is largest
6. End

Flowchart:
   Start
     |
 Input a, b
     |
  a > b ?
   /   \
 Yes   No
  |     |
Print a Print b
  |     |
   \   /
    End
*/

#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    if (a > b) {
        printf("%d is the largest number\n", a);
    } else {
        printf("%d is the largest number\n", b);
    }

    return 0;
}

/*
Output:
Enter first number: 10
Enter second number: 5
10 is the largest number
*/
