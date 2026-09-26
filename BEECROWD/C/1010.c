#include <stdio.h>

int main(){
    int codigo_peca1,numero_pecas1,codigo_peca2,numero_pecas2;
    float valor_peca1,valor_peca2;

    scanf("%d %d %f",&codigo_peca1,&numero_pecas1,&valor_peca1);
    scanf("%d %d %f",&codigo_peca2,&numero_pecas2,&valor_peca2);

    float pagar=(numero_pecas1*valor_peca1)+(numero_pecas2*valor_peca2);

    printf("VALOR A PAGAR: R$ %.2f\n",pagar);





    return 0;
}