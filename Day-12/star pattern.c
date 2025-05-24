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
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
