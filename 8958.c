#include <stdio.h>
#include <string.h>

int main(void) {
    int a;
    scanf("%d", &a);
    char text[80];

    for (int j = 0; j < a; j++) {
    
        scanf("%s", text);

        int score = 0;
        int beforescore = 0;
        int length = strlen(text);
        for (int i = 0; i<length; i++) {
            if (text[i] == 'O') {
                beforescore++;
                score += beforescore;
            }
            if (text[i] == 'X') {
                beforescore = 0;
            }
        }
        printf("%d\n", score);
    }


}
