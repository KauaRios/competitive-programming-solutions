#include <stdio.h>
 
int main() {
    int num_funcionario;

    int horas;
    float valor_hora;

    scanf("%d",&num_funcionario);
    scanf("%d",&horas);
    scanf("%f",&valor_hora);
    float salario=valor_hora*horas;

    printf("NUMBER = %d\nSALARY = U$ %.2f\n",num_funcionario,salario);
    return 0;
}