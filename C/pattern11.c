//Hollow full pyramid of stars using C
#include <stdio.h>

int main() {
    int rows = 7;

    // first outer loop to iterate through each row
    for (int i = 0; i < rows; i++) {

        // first inner loop to print leading whitespaces
        for (int j = 0; j < rows - i - 1; j++) {
            printf(" ");
        }

        // second inner loop to print stars * and inner whitespaces
        for (int k = 0; k < 2 * i + 1; k++) {
            if (k == 0 || k == 2 * i) {
                printf("*");
            } else if (i == rows - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
