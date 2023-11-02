/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file binary_to_decimal.cc
  * @author alu0101552774@ull.edu.es
  * @date 20 oct 2023
  * @brief Pasa un numero binario a un numero decimal
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "Este programa convierte un numero binario en uno decimal\n";
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
  int binario, decimal = 0;
  int indice = 0;
  while (binario > 0) {
    int resto = binario % 10;
    if (resto != 0 && resto != 1) {
      std::cout << "Error, no se ha introducido un numero binario\n";
      return 0;
    }
    if (resto == 1) {
      int potencia = pow(2, indice);
      decimal += potencia;
    }
    ++indice;
    binario /= 10;
  }
  std::cout << "El numero en decimal es: " << decimal << std::endl;
  return 0;
}