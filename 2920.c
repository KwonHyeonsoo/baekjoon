#include <stdio.h>
#include <string.h>

int main(void) {
    int a[8];
    for (int i = 0; i < 8; i++) {
        scanf("%d", &a[i]);
    }
    int s=0;
    for (int i = 1; i < 8; i++) {
        if (a[i] == a[i-1] +1) {
            s++;
        }
        if (a[i] == a[i-1] - 1) {
            s--;
        }
    }
    if (s == 7) {
        printf("ascending");
    }
    else if (s == -7) {
        printf("descending");
    }
    else {
        printf("mixed");
    }
}
