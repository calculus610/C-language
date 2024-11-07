#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calPoints(char* operations, int size) {
    int sum = 0;
    int lastScore = 0;
    int secondLastScore = 0;
    int currentScore = 0;

    for (int i = 0; i < size; i++) {
        if (operations[i] == '+') {
            currentScore = lastScore + secondLastScore;
            sum += currentScore;
        } else if (operations[i] == 'C') {
            if (lastScore!= 0) {
                sum -= lastScore;
            }
        } else if (operations[i] == 'D') {
            if (lastScore!= 0) {
                currentScore = 2 * lastScore;
                sum += currentScore;
            }
        } else if (operations[i] >= '0' && operations[i] <= '9') {
            currentScore = operations[i] - '0';
            sum += currentScore;
        }

        secondLastScore = lastScore;
        lastScore = currentScore;
    }

    return sum;
}

int main() {
    const int maxOperations = 1000;
    char operations[maxOperations];
    int operationCount = 0;
    char input;

    printf("Please enter the operation. Enter 'e' to end input. Please enter one integer first.\n");
    while (operationCount < maxOperations) {
        printf("Please enter operation %d: ", operationCount);
        scanf(" %c", &input);
        if (input >= '0' && input <= '9' || input == '-') {
            int num;
            ungetc(input, stdin);
            scanf("%d", &num);

            if (num < -30000 || num > 30000) {
                printf("Error, please enter an integer that is between -30000 and 30000.\n");
            } else {
                operations[operationCount] = num;
                operationCount++;
            }
        }else if (input == '+' || input == 'C' || input == 'D' || input == 'e') {
        operations[operationCount] = input;
        operationCount++;
        if (input == 'e') break;
    }
    else {
        printf("Error. Please enter a valid digit (C, +, D, integer) or 'e'.\n");
    }
    }

    int result = calPoints(operations, operationCount);
    printf("The total score is: %d\n", result);

    return 0;
}