#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

int main() 
{
    system("chcp 65001");

    int N;
    float *A, *B, sumA = 0, sumB = 0, avgA, avgB;

    srand(time(NULL));

    printf("Введіть N (де 2 < N < %d): ", M);
    scanf("%d", &N);

    if (N <= 2 || N >= M) 
    {
        printf("Помилка: N повинно бути в межах (2, %d)\n", M);
        return 1;
    }

    A = (float *)malloc(N * sizeof(float));
    B = (float *)malloc(N * sizeof(float));

    if (!A || !B) 
    {
        printf("Помилка виділення памʼяті.\n");
        return 1;
    }

    printf("\nМасив A: ");

    for (int i = 0; i < N; i += 1) 
    {
        A[i] = rand() % 100;
        printf("%.2f ", A[i]);
        sumA += A[i];
    }

    printf("\nМасив B: ");

    for (int i = 0; i < N; i += 1) 
    {
        B[i] = rand() % 100;
        printf("%.2f ", B[i]);
        sumB += B[i];
    }

    avgA = sumA / N;
    avgB = sumB / N;

    printf("\n\nСереднє арифметичне A: %.2f", avgA);
    printf("\nСереднє арифметичне B: %.2f\n", avgB);

    free(A);
    free(B);

    return 0;
}

