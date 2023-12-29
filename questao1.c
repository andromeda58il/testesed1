#include <stdio.h>

void inverterv(int vetor[], int tamanho) {
    int inicio = 0;
    int fim = tamanho - 1;
    int i;

    while (inicio < fim) {
        
       i = vetor[inicio];
        vetor[inicio] = vetor[fim];
        vetor[fim] = i;

        
        inicio++;
        fim--;
    }
}
int main() {
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("vetor original: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    inverterv(vetor, tamanho);
    
    printf("vetor invertido: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    return 0;
}
