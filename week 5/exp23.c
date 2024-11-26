#include <stdio.h>

int main() {
    int j, n, i, t;
    scanf("%d", &n);
    int a[n];
    for (j = 0; j < n; j++) {
        scanf("%d", &a[j]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }

    t = 0;
    for (j = 0; j < n; j++) {
        t = t + a[j];
    }

    printf("the min value is %d \nthe max value is %d \nthe avg value is %d \n", a[0], a[n - 1], t / n);
    return 0;
}

