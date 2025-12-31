/*
--------------------------------------------------
Experiment No: 12
Experiment Name: Program to find the sum of N natural numbers

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to find the sum of first N natural numbers.

Algorithm:
1. Start
2. Declare variables n, i, sum
3. Read the value of n
4. Initialize sum = 0
5. Use loop from 1 to n and add to sum
6. Display the sum
7. End

Flowchart:
   Start
     |
 Input n
     |
 sum = 0, i = 1
     |
 i <= n ?
   /        \
 Yes        No
  |          |
sum = sum+i End
  |
 i = i + 1
  |
 (Repeat)
*/

#include <stdio.h>

int main() {
    int n, i, sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of first %d natural numbers = %d\n", n, sum);

    return 0;
}

/*
Output:
Enter the value of N: 5
Sum of first 5 natural numbers = 15
*/
