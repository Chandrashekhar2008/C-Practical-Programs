/*
--------------------------------------------------
Experiment No: 2
Experiment Name: Program to print name and age using printf()

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to print name and age using printf() function.

Algorithm:
1. Start
2. Declare variables for name and age
3. Print name and age using printf()
4. End

Flowchart:
   Start
     |
 Declare variables
     |
 Print name & age
     |
    End
*/

#include <stdio.h>

int main() {
    char name[] = "Pukka Chandrashekhar";
    int age = 20;

    printf("Name: %s\n", name);
    printf("Age: %d\n", age);

    return 0;
}

/*
Output:
Name: Pukka Chandrashekhar
Age: 20
*/
