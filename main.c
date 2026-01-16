#include <stdio.h>

#include <stdio.h>

int main() {
    int i;

    for (i = 1; i <= 10000; i++) {
        if (i % 3 == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}
