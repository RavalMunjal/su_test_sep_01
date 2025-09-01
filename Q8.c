#include <stdio.h>

int main() {
    int count;
    float a, b, result;

    do {   
        printf("Enter your number: ");
        scanf("%d", &count);
   
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
        
        switch (count) {
            case 1:
                result = a + b;
                printf("Result = %f\n", result);
                break;
            case 2:
                result = a - b;
                printf("Result = %f\n", result);
                break;
            case 3:
                result = a * b;
                printf("Result = %f\n", result);
                break;
            case 4:
                if (b = 0)
                    printf("Result = %f\n", a / b);
                else
                    printf("Error.\n");
                break;
            case 5:
                printf("Exiting program\n");
                break;
            default:
                printf("Invalid.\n");
        }
break;

    } while (count = 5);

    return 0;
}
