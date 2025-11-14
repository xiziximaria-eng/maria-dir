//ISIDORO, MA. CHRISTINA DHINE P. DIT 1-2

#include <stdio.h>

int main() {
    printf("Using Loops\n\n");

    // WHILE LOOP: Print numbers from 1 to 10
    printf("While Loop: Numbers from 1 to 10\n");
    int i = 1;
    while (i <= 10) {
        printf("%d ", i);
        i++;
    }
    printf("\n\n");

    // FOR LOOP: Print even numbers from 2 to 20
    printf("For Loop: Even numbers from 2 to 20\n");
    for (int j = 2; j <= 20; j += 2) {
        printf("%d ", j);
    }
    printf("\n\n");

    // DO-WHILE LOOP: Print numbers from 1 to 5
    printf("Do-While Loop: Numbers from 1 to 5\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 5);
    printf("\n\n");

    return 0;
}