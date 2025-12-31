/*
--------------------------------------------------
Experiment No: 13
Experiment Name: Program demonstrating break and continue statements

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to demonstrate the use of break and continue statements.

Algorithm:
1. Start
2. Use a loop from 1 to 10
3. When i equals 5, use continue to skip
4. When i equals 8, use break to exit loop
5. Print remaining values
6. End

Flowchart:
   Start
     |
 i = 1
     |
 i <= 10 ?
   /        \
 Yes        No
  |
 i == 5 ?
   |
Continue
  |
 i == 8 ?
   |
 Break
  |
 Print i
  |
i = i + 1
  |
 (Repeat)
*/

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i == 5) {
            continue;
        }
        if (i == 8) {
            break;
        }
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

/*
Output:
1 2 3 4 6 7
*/
