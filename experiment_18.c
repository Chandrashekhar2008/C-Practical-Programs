/*
--------------------------------------------------
Experiment No: 18
Experiment Name: Program to find sum of elements of a 2D array

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to find the sum of all elements of a two-dimensional array.

Algorithm:
1. Start
2. Declare 2D array and variables
3. Read number of rows and columns
4. Input elements of the matrix
5. Add all elements to sum
6. Display the sum
7. End

Flowchart:
   Start
     |
 Input rows, cols
     |
 Input matrix
     |
 sum = 0
     |
 Add all elements
     |
 Display sum
     |
    End
*/

#include <stdio.h>

int main() {
    int mat[10][10], rows, cols, i, j, sum = 0;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }

    printf("Sum of all elements of the matrix = %d\n", sum);

    return 0;
}

/*
Output:
Enter number of rows: 2
Enter number of columns: 2
Enter elements of the matrix:
1 2
3 4
Sum of all elements of the matrix = 10
*/
