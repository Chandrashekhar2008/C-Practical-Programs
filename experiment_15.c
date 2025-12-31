/*
--------------------------------------------------
Experiment No: 15
Experiment Name: Program for Linear Search

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to perform linear search on an array.

Algorithm:
1. Start
2. Declare array and variables
3. Read number of elements
4. Input array elements
5. Read element to be searched
6. Compare each element with key
7. If found, display position
8. Else, display not found
9. End

Flowchart:
   Start
     |
 Input n
     |
 Input array
     |
 Input key
     |
 Compare elements
     |
 Found ?
   /       \
 Yes       No
  |         |
Print pos Not found
  |
   \       /
       End
*/

#include <stdio.h>

int main() {
    int arr[50], n, i, key, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1;
            printf("Element %d found at position %d\n", key, i + 1);
            break;
        }
    }

    if (found == 0) {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}

/*
Output:
Enter number of elements: 5
Enter 5 elements:
10 20 30 40 50
Enter element to search: 30
Element 30 found at position 3
*/
