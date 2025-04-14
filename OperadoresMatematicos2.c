#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

    printf("Antes incremento %d\n", numero1);
    //Numero = numero1 +1;
    //Numero1 += 1;
    // Pós incremento;
    //Resultado = numero1;
    //numero++;

    resultado = numero1++;
    //printf("Após incremento: %d\n, numero1, );
   printf("Após Pós-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
   resultado = ++numero1;
   //printf("Após incremento: %d\n, numero1, );
  printf("Após Pré-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Numero1 = numero -1;
    //Numero1 = -= 1;
    resultado = numero1--;
    printf("Após Pós-decremneto - Numero 1: %d - Resultado: %d\n", numero1, resultado);
    
    resultado = --numero1;
    printf("Após Pré-decremneto - Numero 1: %d - Resultado: %d\n", numero1, resultado);

}