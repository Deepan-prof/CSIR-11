#include <stdio.h>

int main () {
    int j, i, t, n, k = 0;
    scanf("%d", &n);
    int a[n];
    for (j = 0; j < n; j++) {
        scanf("%d", &a[j]);
    }
    
    printf("enter the number \n");
    scanf("%d", &t);
    
    for (j = 0; j < n; j++) {
        if (t == a[j]) k = k + 1;
    }
    
    printf("%d", k);
    return 0;
}

