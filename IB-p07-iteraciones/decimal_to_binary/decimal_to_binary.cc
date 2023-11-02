/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file binary_to_decimal.cc
  * @author alu0101552774@ull.edu.es
  * @date 20 oct 2023
  * @brief Pasa un numero decimal a binario
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>
#include <cmath>

void PrintProgramPurpose() {
  std::cout << "Este programa convierte un numero decimal en uno binario\n";
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
  int numeroDecimal;
  std::cin >> numeroDecimal;
  int binario = 0;
  int indice = 1;
  while (numeroDecimal > 0) {
    int residuo = numeroDecimal % 2;
    binario += residuo * indice;
    numeroDecimal /= 2;
    indice *= 10;
  }
  std::cout << "El número en binario es: " << binario << std::endl;
  return 0;
}