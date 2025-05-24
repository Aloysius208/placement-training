#include <stdio.h>

int main() {
    int n;

    // Input
    printf("Enter a number: ");
    scanf("%d", &n);

    // Constraint check
    if (n <= 0) {
        printf("Input must be greater than 0.\n");
        return 1;
    }

    // Pattern printing
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print 1 if (i + j) is even, else 0
            if ((i + j) % 2 == 0)
                printf("1");
            else
                printf("0");
        }
        printf("\n");
    }

    return 0;
}
