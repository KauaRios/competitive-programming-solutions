#include <stdio.h>

int main()
{
    int N;
    char dieta[28];
    char cafe[28];
    char almoco[28];
    int encontrou = 0;
    int trapaceou = 0;
    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++)
    {
        fgets(dieta, sizeof(dieta), stdin);
        fgets(cafe, sizeof(cafe), stdin);
        fgets(almoco, sizeof(almoco), stdin);

        for (int j = 0; cafe[j] != '\n'; j++)
        {
            encontrou = 0;
            trapaceou = 0;
            for (int k = 0; dieta[k] != '\n' && dieta[k] != '\0'; k++)
            {
                if (cafe[j] == dieta[k])
                {
                    dieta[k] = '*';
                    encontrou = 1;
                    break;
                }
            }
            if (encontrou == 0)
            {
                trapaceou = 1;
            }
        }
        for (int a = 0; almoco[a] != '\n'; a++)
        {
            encontrou = 0;
            trapaceou = 0;
            for (int d = 0; dieta[d] != '\n' && dieta[d] != '\0'; d++)
            {
                if (almoco[a] == dieta[d])
                {
                    dieta[d] = '*';
                    encontrou = 1;
                    break;
                }
            }
            if (encontrou == 0)
            {
                trapaceou = 1;
            }
        }
        if (trapaceou == 1)
        {
            printf("CHEATER\n");
        }
        else
        {
            for (int dietafinal = 0; dieta[dietafinal] != '\n' && dieta[dietafinal] != '\0'; dietafinal++)
            {
                if (dieta[dietafinal] != '*')
                {
                    printf("%c", dieta[dietafinal]);
                }
            }
        }
    }

    return 0;
}