/*#include <stdio.h>

int main() {
    int num;
    scanf_s("%d", &num, 30);
    if (num <= 30) {
        if (num % 2 == 0) {
            for (int count = 0; count <= num / 2 - 1; count++) {
                for (int i = 1; i <= num; i++) {
                    if (i == num / 2 + count || i == num / 2 - count) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            for (int count = num / 2 - 2; count >= 0; count--) {
                for (int i = 1; i < num; i++) {
                    if (i == num / 2 + count || i == num / 2 - count) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
        else {
            for(int count = 0; count <= (num + 1) / 2 - 1; count++) {
                for (int i = 1; i <= num; i++) {
                    if (i == (num + 1) / 2 + count || i == (num + 1) / 2 - count) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            for (int count = num / 2 - 1; count >= 0; count--) {
                for (int i = 0; i < num; i++) {
                    if (i == num / 2 + count || i == num / 2 - count) {
                        printf("*");
                    }
                    else {
                        printf(" ");
                    }
                }
                printf("\n");
            }
        }
    }
}*/