#include <stdio.h>
#include <stdlib.h>
/*
Calcula el área de un círculo cuyo radio es de 8.9cm. Tome pi = 3.14

*/
int main() {
  double pi = 3.14;
  double radius = 8.9;      //radius has to be declared as a 'double'
  double area = pi * radius * radius;
  system("cls");
  printf("El valor del Area es %lf \n", area ); 
  return 0;
}