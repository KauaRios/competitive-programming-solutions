#include <stdio.h>
 
int main() {
    int contador=0;
    int t;
    int valores[5];

    scanf("%d",&t);
    scanf("%d %d %d %d %d",&valores[0],&valores[1],&valores[2],&valores[3],&valores[4]);

    for(int i=0;i<5;i++){
        if(valores[i]==t){
        contador++;
        }
        

    }


    printf("%d\n",contador);

    
    return 0;
}