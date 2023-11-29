#include <stdio.h>

void vet(int n, int num[]) {
    printf("Valores do vetor em ordem inversa:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    printf("\n");
}

int main() {
    int n;
    printf("Quantos numeros voce quer no vetor? ");
    scanf("%d", &n);
    
    int vetor[n];
    for (int i = 0; i < n; i++) {
        printf("Digite o %do numero desse vetor: ");
        scanf("%d", &vetor[i]);
    }
    
    vet(n, vetor); 
    return 0;
}