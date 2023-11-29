#include<stdio.h>

int soma(int a, int b) {
    int i, soma = 0; 

    for (i=a; i < b; i++) { 
        soma = soma + i;
    }

    return soma-a;
}

int main() {
    int s, a, b;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);
    printf("Digite o segundo valor: ");
    scanf("%d", &b);

    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }

    s = soma(a, b); 
    
    printf("A soma dos numeros entre %d e %d eh: %d\n", a, b, s); 

    return 0;
}