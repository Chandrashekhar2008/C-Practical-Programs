/*
--------------------------------------------------
Experiment No: 19
Experiment Name: Program using string functions (strlen, strcpy, strcat, strcmp)

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to demonstrate basic string handling functions.

Algorithm:
1. Start
2. Declare string variables
3. Find length of string using strlen()
4. Copy string using strcpy()
5. Concatenate strings using strcat()
6. Compare strings using strcmp()
7. Display results
8. End

Flowchart:
   Start
     |
 Declare strings
     |
 strlen()
     |
 strcpy()
     |
 strcat()
     |
 strcmp()
     |
 Display results
     |
    End
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str1[50] = "Hello";
    char str2[50] = "World";
    char str3[50];

    // String length
    printf("Length of str1 = %lu\n", strlen(str1));

    // String copy
    strcpy(str3, str1);
    printf("After copying, str3 = %s\n", str3);

    // String concatenation
    strcat(str1, str2);
    printf("After concatenation, str1 = %s\n", str1);

    // String comparison
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }

    return 0;
}

/*
Output:
Length of str1 = 5
After copying, str3 = Hello
After concatenation, str1 = HelloWorld
Strings are not equal
*/
