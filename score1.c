#include <stdio.h>

int main() {
    int a, b, c;
   
    int sum, sum2, sum3, sum4, sum5;
    double avg, avg2, avg3, avg4, avg5;
    char grade, grade2, grade3, grade4, grade5;
    
    printf("1¹ø : ");
    scanf("%d %d %d", &a, &b, &c);

    sum = a + b + c;
    avg = sum / 3.0;

    printf("2¹ø : ");
    scanf("%d %d %d", &a, &b, &c);

    sum2 = a + b + c;
    avg2 = sum2 / 3.0;

    printf("3¹ø : ");
    scanf("%d %d %d", &a, &b, &c);

    sum3 = a + b + c;
    avg3 = sum3 / 3.0;

    printf("4¹ø : ");
    scanf("%d %d %d", &a, &b, &c);

    sum4 = a + b + c;
    avg4 = sum4 / 3.0;

    printf("5¹ø : ");
    scanf("%d %d %d", &a, &b, &c);

    sum5 = a + b + c;
    avg5 = sum5 / 3.0;

    if(avg > 89) grade = 'A';
    else if (avg > 79) grade = 'B';
    else if (avg > 69) grade = 'C';
    else grade = 'F';

    if(avg2 > 89) grade2 = 'A';
    else if (avg2 > 79) grade2 = 'B';
    else if (avg2 > 69) grade2 = 'C';
    else grade2 = 'F';

    if(avg3 > 89) grade3 = 'A';
    else if (avg3 > 79) grade3 = 'B';
    else if (avg3 > 69) grade3 = 'C';
    else grade3 = 'F';

    if(avg4 > 89) grade4 = 'A';
    else if (avg4 > 79) grade4 = 'B';
    else if (avg4 > 69) grade4 = 'C';
    else grade4 = 'F';
    
    if(avg5 > 89) grade5 = 'A';
    else if (avg5 > 79) grade5 = 'B';
    else if (avg5 > 69) grade5 = 'C';
    else grade5 = 'F';

    printf("\n");
    printf("1¹ø ÃÑÁ¡Àº %d, Æò±ÕÀº %.1f(µî±Þ %c)\n", sum, avg, grade);
    printf("2¹ø ÃÑÁ¡Àº %d, Æò±ÕÀº %.1f(µî±Þ %c)\n", sum2, avg2, grade2);
    printf("3¹ø ÃÑÁ¡Àº %d, Æò±ÕÀº %.1f(µî±Þ %c)\n", sum3, avg3, grade3);
    printf("4¹ø ÃÑÁ¡Àº %d, Æò±ÕÀº %.1f(µî±Þ %c)\n", sum4, avg4, grade4);
    printf("5¹ø ÃÑÁ¡Àº %d, Æò±ÕÀº %.1f(µî±Þ %c)\n", sum5, avg5, grade5);
    
}