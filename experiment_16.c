/*
--------------------------------------------------
Experiment No: 16
Experiment Name: Program for Bubble Sort

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to sort elements of an array using Bubble Sort technique.

Algorithm:
1. Start
2. Declare array and variables
3. Read number of elements
4. Input array elements
5. Use bubble sort to arrange elements in ascending order
6. Display sorted array
7. End

Flowchart:
   Start
     |
 Input n
     |
 Input array
     |
 Compare adjacent elements
     |
 Swap if needed
     |
 Repeat passes
     |
 Display sorted array
     |
    End
*/

#include <stdio.h>

int main() {
    int arr[50], n, i, j, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Bubble Sort Logic
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Sorted array in ascending order:\n");
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
5 3 4 1 2
Sorted array in ascending order:
1 2 3 4 5
*/
