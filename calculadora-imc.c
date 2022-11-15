#include <stdio.h>

float calculaIMC() {
  float peso, altura, imc;

  printf("\nInforme seu peso: ");
  scanf("%f", &peso);
  printf("\nInforme sua altura: ");
  scanf("%f", &altura);

  imc = peso / (altura * altura);

  return imc;
}


int main(void) {
  float imc;

  imc = calculaIMC();


  if(imc < 18.5) {
    printf("\nAbaixo do peso. %.2f", imc);
  }else if(imc < 24.9) {
    printf("\nPeso normal. %.2f", imc);
  }else {
    printf("\nSobrepeso. %.2f", imc);
  }

  printf("\n------------------");
}