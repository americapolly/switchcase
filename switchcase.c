#include <stdio.h>

int main ( ) {
char op;
float num1, num2;

printf("Digite um número, um operador e um número:");
scanf (" %f %c %f", &num1, &op, &num2);

switch (op) {
  case '+':
    printf ("=%f", num1 + num2);
  break;
  
  case '-':
    printf ("=%f", num1 - num2);
  break;

  default:
    printf ("Operador inválido!");
}

}
