/*
--------------------------------------------------
Experiment No: 8
Experiment Name: Program to check whether a number is odd or even

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to check whether a given number is odd or even.

Algorithm:
1. Start
2. Declare an integer variable n
3. Read the value of n
4. If n % 2 == 0, print Even
5. Else, print Odd
6. End

Flowchart:
   Start
     |
 Input n
     |
 n % 2 == 0 ?
   /      \
 Yes      No
  |        |
Even     Odd
  |        |
   \      /
      End
*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("%d is an Even number\n", n);
    } else {
        printf("%d is an Odd number\n", n);
    }

    return 0;
}

/*
Output:
Enter a number: 6
6 is an Even number
*/
