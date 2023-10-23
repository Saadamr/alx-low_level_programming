#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
int i, diag1_sum = 0, diag2_sum = 0;

for (i = 0; i < size; i++) {
diag1_sum += a[i * size + i];          /* Sum of the main diagonal */
diag2_sum += a[i * size + (size - 1 - i)];  /* Sum of the other diagonal */
}

printf("%d, %d\n", diag1_sum, diag2_sum);
}
