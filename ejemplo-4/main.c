#include <stdio.h>
#include <stdlib.h>
//rax     rdi, rsi
int sumar(int, int);

int main (int numeroParametros, char ** argumentos){
      
     int resultado;
     int numero1=5;
     int numero2=6;
     printf("el numero de parametros en la linea de comandos fue %d\r\n", numeroParametros);
     resultado = sumar(numero1, numero2);
     printf("la suma de %d y %d en %d\r\n", numero1, numero2, resultado);

    return(EXIT_SUCCESS);
}
