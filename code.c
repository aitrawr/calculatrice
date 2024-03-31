#include <stdio.h>

int main() {
            printf("entre la valeur arithmetique que tu souhaite utiliser en premier parmis celle en dessous. Ensuite rentre ton premier nombre, appuie sur enter et proceed avec ton deuxieme.\n");
    char operator;
    double num1, num2, result;

    printf("\nentre la valeur (+, -, *, /): ");
    scanf("%c", &operator);

    printf("entre deux nombres: ");
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf", num1, num2, result);
            } else {
                printf("div by 0");
            }
            break;
        default:
            printf("op non reconnu");
    }

    return 0;
}

//j'ai envie dme suicider