#include <stdio.h>

int main()
{
    int caso_teste;
    int valor1, valor2;

    scanf("%d", &caso_teste);

    for (int i = 0; i < caso_teste; i++)
    {
        scanf("%d %d", &valor1, &valor2);

        while (valor2 != 0)
        {
            int resto = valor1 % valor2;
            valor1 = valor2;
            valor2 = resto;
        }

        printf("%d\n", valor1);
    }

    return 0;
}