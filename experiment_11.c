/*
--------------------------------------------------
Experiment No: 11
Experiment Name: Program to print numbers from 1 to 10 using loops

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to print numbers from 1 to 10 using a loop.

Algorithm:
1. Start
2. Declare integer variable i
3. Use loop to print numbers from 1 to 10
4. End

Flowchart:
   Start
     |
 i = 1
     |
 i <= 10 ?
   /        \
 Yes        No
  |          |
Print i     End
  |
i = i + 1
  |
 (Repeat)
*/

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

/*
Output:
1 2 3 4 5 6 7 8 9 10
*/
