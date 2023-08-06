#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Select an operation: \n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Square root\n");
    printf("6. Power\n");
    printf("7. Sine\n");
    printf("8. Cosine\n");
    printf("9. Tangent\n");

    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 + num2;
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 - num2;
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            result = num1 * num2;
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if(num2 != 0.0) {
                result = num1 / num2;
            } else {
                printf("Error! Division by zero.");
                return -1;
            }
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%lf", &num1);
            result = sqrt(num1);
            break;

        case 6:
            printf("Enter base and exponent respectively: ");
            scanf("%lf %lf", &num1, &num2);
            result = pow(num1, num2);
            break;

        case 7:
            printf("Enter an angle in degrees: ");
            scanf("%lf", &num1);
            result = sin(num1 * M_PI / 180);
            break;

        case 8:
            printf("Enter an angle in degrees: ");
            scanf("%lf", &num1);
            result = cos(num1 * M_PI / 180);
            break;

        case 9:
            printf("Enter an angle in degrees: ");
            scanf("%lf", &num1);
            result = tan(num1 * M_PI / 180);
            break;

        default:
            printf("Error! Invalid operation.");
            return -1;
    }

    printf("The result is: %lf\n", result);

    return 0;
}
