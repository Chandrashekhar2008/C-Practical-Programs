/*
--------------------------------------------------
Experiment No: 14
Experiment Name: Program for 1D array input and output

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to read and display elements of a one-dimensional array.

Algorithm:
1. Start
2. Declare array and variables
3. Read number of elements
4. Input array elements
5. Display array elements
6. End

Flowchart:
   Start
     |
 Input n
     |
 Input array elements
     |
 Display array elements
     |
    End
*/

#include <stdio.h>

int main() {
    int arr[50], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array elements are:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

/*
Output:
Enter number of elements: 5
Enter 5 elements:
1 2 3 4 5
Array elements are:
1 2 3 4 5
*/
