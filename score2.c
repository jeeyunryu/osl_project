#include <stdio.h>

int main() {
    int score[3];
    // int a, b, c;
    int sum[5] = {0};
    int avg[5];
    char grade[5];

    for(int i = 0; i < 5; i++) {
        printf("%d¹ø : ", i+1);
        for(int j = 0; j < 3; j++) {
            scanf("%d", &score[j]);
            sum[i] += score[j]; 
        }
        //scanf("%d %d %d", &a, &b, &c);
        //scanf(" %c", &chr);
        // printf("\n");
        avg[i] = sum[i] / 3.0;

        if(avg[i] > 89) grade[i] = 'A';
        else if (avg[i] > 79) grade[i] = 'B';
        else if (avg[i] > 69) grade[i] = 'C';
        else grade[i] = 'F';
    
    }
    printf("\n");
    for(int i = 0; i < 5; i++) {
        printf("%d¹ø ÃÑÁ¡Àº %d, Æò±ÕÀº %.1f(µî±Þ %c)\n", i+1, sum[i], avg[i], grade[i]);
    }
}