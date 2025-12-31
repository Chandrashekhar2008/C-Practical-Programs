/*
--------------------------------------------------
Experiment No: 10
Experiment Name: Program using switch case calculator

Name: Pukka Chandrashekhar
ERP ID: RU-25-11057
--------------------------------------------------

Aim:
To write a C program to perform basic arithmetic operations using switch case.

Algorithm:
1. Start
2. Declare variables a, b, result, and operator
3. Read operator from user
4. Read two numbers
5. Use switch case to perform operation
6. Display result
7. End

Flowchart:
   Start
     |
 Input operator
     |
 Input a, b
     |
 Switch(operator)
  |  |  |  |
  +  -  *  /
  |  |  |  |
Result displayed
     |
    End
*/

#include <stdio.h>

int main() {
    float a, b, result;
    char op;

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (op) {
        case '+':
            result = a + b;
            printf("Result = %.2f\n", result);
            break;
        case '-':
            result = a - b;
            printf("Result = %.2f\n", result);
            break;
        case '*':
            result = a * b;
            printf("Result = %.2f\n", result);
            break;
        case '/':
            if (b != 0) {
                result = a / b;
                printf("Result = %.2f\n", result);
            } else {
                printf("Division by zero is not allowed\n");
            }
            break;
        default:
            printf("Invalid operator\n");
    }

    return 0;
}

/*
Output:
Enter operator (+, -, *, /): *
Enter two numbers: 5 4
Result = 20.00
*/
