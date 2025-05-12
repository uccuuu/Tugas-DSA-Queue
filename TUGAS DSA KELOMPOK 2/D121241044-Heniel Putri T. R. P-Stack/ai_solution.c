#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Fungsi untuk menghasilkan bilangan prima sebanyak q
int* generate_primes(int q) {
    int* primes = (int*)malloc(q * sizeof(int));
    if (primes == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    int count = 0;
    int num = 2;
    while (count < q) {
        bool is_prime = true;
        for (int i = 0; i < count; i++) {
            if (primes[i] * primes[i] > num) {
                break;
            }
            if (num % primes[i] == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            primes[count++] = num;
        }
        num++;
    }
    return primes;
}

// Fungsi untuk memproses tumpukan piring sesuai aturan yang diberikan
int* waiter(int* number, int n, int q, int* result_size) {
    int* answers = (int*)malloc(n * sizeof(int));
    if (answers == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    *result_size = 0;

    int* A = (int*)malloc(n * sizeof(int));
    if (A == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    int A_size = n;
    for (int i = 0; i < n; i++) {
        A[i] = number[i];
    }

    int* primes = generate_primes(q);

    for (int i = 0; i < q; i++) {
        int prime = primes[i];
        int* new_A = (int*)malloc(A_size * sizeof(int));
        if (new_A == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        int new_A_size = 0;
        int* B = (int*)malloc(A_size * sizeof(int));
        if (B == NULL) {
            perror("Memory allocation failed");
            exit(EXIT_FAILURE);
        }
        int B_size = 0;

        for (int j = A_size - 1; j >= 0; j--) {
            if (A[j] % prime == 0) {
                B[B_size++] = A[j];
            } else {
                new_A[new_A_size++] = A[j];
            }
        }

        // Menambahkan elemen B ke answers (dari atas ke bawah)
        for (int j = B_size - 1; j >= 0; j--) {
            answers[(*result_size)++] = B[j];
        }

        free(A);
        free(B);
        A = new_A;
        A_size = new_A_size;
    }

    // Menambahkan sisa elemen di A ke answers (dari atas ke bawah)
    for (int j = A_size - 1; j >= 0; j--) {
        answers[(*result_size)++] = A[j];
    }

    free(A);
    free(primes);
    return answers;
}

int main() {
    int n, q;
    scanf("%d %d", &n, &q);

    int* number = (int*)malloc(n * sizeof(int));
    if (number == NULL) {
        perror("Memory allocation failed");
        return EXIT_FAILURE;
    }

    for (int i = 0; i < n; i++) {
        scanf("%d", &number[i]);
    }

    int result_size;
    int* result = waiter(number, n, q, &result_size);

    for (int i = 0; i < result_size; i++) {
        printf("%d\n", result[i]);
    }

    free(number);
    free(result);
    return 0;
}
