#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int calPoints(int scores[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += scores[i];
    }
    return sum;
}

int isInteger(char input[]) {
    int length = strlen(input);


    if ((input[0] == '-' || input[0] == '+') && length == 1) {
        return 0;
    }


    for (int i = 0; input[i] != '\0'; i++) {
        if (i == 0 && (input[i] == '-' || input[i] == '+')) {
            continue;
        }
        if (!isdigit(input[i])) {
            return 0;
        }
    }

    return 1;
}

int main() {
    const int maxOperations = 1000;
    int scores[maxOperations];
    int operationCount = 0;
    char input[20];

    printf("Please enter the operations (C, D, +, or an integer between -30000 and 30000). Type 'e' to end input.\n");

    while (operationCount < maxOperations) {
        printf("Enter operation %d: ", operationCount + 1);
        fflush(stdout);
        scanf("%s", input);

        if (input[0] == 'e') {
            break;
        } else if (input[0] == '+') {
            if (operationCount >= 2) {
                int newScore = scores[operationCount - 1] + scores[operationCount - 2];
                scores[operationCount] = newScore;
                operationCount++;
            } else {
                printf("Error: Not enough previous scores for '+' operation.\n");
                continue;
            }
        } else if (input[0] == 'C') {
            if (operationCount > 0) {
                operationCount--;
            } else {
                printf("Error: No previous scores to cancel.\n");
            }
        } else if (input[0] == 'D') {
            if (operationCount > 0) {
                scores[operationCount] = 2 * scores[operationCount - 1];
                operationCount++;
            } else {
                printf("Error: No previous score to double.\n");
            }
        } else {
            if (strchr(input, '.')) {
                printf("Error: Decimals are not allowed. Please enter an integer.\n");
                continue;
            }

            if (!isInteger(input)) {
                printf("Error: Invalid input. Please enter a valid integer.\n");
                continue;
            }

            int num = atoi(input);

            if (num < -30000 || num > 30000) {
                printf("Error: Please enter an integer between -30000 and 30000.\n");
                continue;
            }

            scores[operationCount] = num;
            operationCount++;
        }

        getchar();
    }

    int result = calPoints(scores, operationCount);
    printf("The total score is: %d\n", result);

    return 0;
}


