#include <stdio.h>

int main() {
    int quantidade_linhas;
    char letras[100];

    scanf("%d", &quantidade_linhas);

    for (int i = 0; i < quantidade_linhas; i++) {
        scanf("%99s", letras);

        int tamanho = 0;

        while (letras[tamanho] != '\0') {
            tamanho++;
        }
        for (int j = tamanho; j >= 0; j--) {
            letras[j + 3] = letras[j];
        }
        printf("%s\n", letras);
    }

    return 0;
}