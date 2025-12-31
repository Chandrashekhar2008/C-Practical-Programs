/*
--------------------------------------------------
Experiment No: 17
Experiment Name: Program for 2D array input and output

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to read and display elements of a two-dimensional array.

Algorithm:
1. Start
2. Declare 2D array and variables
3. Read number of rows and columns
4. Input elements of the 2D array
5. Display the elements in matrix form
6. End

Flowchart:
   Start
     |
 Input rows, cols
     |
 Input matrix elements
     |
 Display matrix
     |
    End
*/

#include <stdio.h>

int main() {
    int mat[10][10], rows, cols, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Matrix elements are:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*
Output:
Enter number of rows: 2
Enter number of columns: 2
Enter elements of the matrix:
1 2
3 4
Matrix elements are:
1 2
3 4
*/
