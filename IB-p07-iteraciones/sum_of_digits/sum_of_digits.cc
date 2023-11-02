/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_digits.cc
  * @author alu0101552774@ull.edu.es
  * @date 20 oct 2023
  * @brief Suma los digitos de un numero
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa recibe un numero y  imprime por pantalla la suma de sus digitos\n";
  return;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int KCorrectParameters) {
  if (argc == KCorrectParameters) {
    return true;
  }
  return false;
}

int main(const int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    std::cout << "El numero de parametros es incorrecto\n";
    return 0;
  }
  int numero;
  std::cin >> numero;
  int suma = 0;
  while (numero > 0) {
    suma += numero % 10;
    numero /= 10;
  }
  std::cout << "La suma de los digitos es: " << suma << std::endl;
  return 0;
}