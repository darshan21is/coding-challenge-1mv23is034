#include <stdio.h>

int main() {
    int n, a = 0, b = 1, nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        nextTerm = a + b;
        a = b;
        b = nextTerm;
    }

    return 0;
}
