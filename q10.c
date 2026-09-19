#include <stdio.h>

int main() {
    float M, P, C, E, CM;

    // Input marks from the user
    printf("Enter Mathematics marks (out of 200): ");
    scanf("%f", &M);

    printf("Enter Physics marks (out of 200): ");
    scanf("%f", &P);

    printf("Enter Chemistry marks (out of 200): ");
    scanf("%f", &C);

    printf("Enter Entrance Examination marks (out of 100): ");
    scanf("%f", &E);

    
    CM = (M / 2.0) + (P / 2.0) + (C / 2.0) + E;

    printf("\n-----------------------------------\n");
    printf("The calculated Cutoff Mark is: %.2f\n", CM);
    printf("-----------------------------------\n");

    return 0;
}

