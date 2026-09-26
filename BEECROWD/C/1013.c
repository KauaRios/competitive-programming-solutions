#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,s;


    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&s);

    int MaiorAB = (a + b + abs(a - b)) / 2;

   if(MaiorAB > s){
    printf("%d eh o maior\n",MaiorAB);
   }else{
    printf("%d eh o maior\n",s);
   }


   



    return 0;
}