#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number) {
    unsigned int soma = 0;

      for (unsigned int i = 1; i <= number; i++) {
          soma+=i;
      }
    soma=soma*soma;
    return soma;
}

unsigned int sum_of_squares(unsigned int number) {
    unsigned int soma_quadrados = 0;

    for (unsigned int i=1;i <= number;i++){
        soma_quadrados+=i*i;
        
    }
    return soma_quadrados;

}

unsigned int difference_of_squares(unsigned int number) {
    int diferenca=square_of_sum(number)-sum_of_squares(number);

    return diferenca;
    
}