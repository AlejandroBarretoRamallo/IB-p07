/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_digits.cc
  * @author alu0101552774@ull.edu.es
  * @date 20 oct 2023
  * @brief Recibe un anio eh imprime si es bisiesto o no
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa recibe un anio n y indica si es bisiesto o no\n";
  return;
}

bool CheckCorrectParameters(const int argc, char *argv[], const int KCorrectParameters) {
  if(argc == KCorrectParameters) {
    return true;
  }
  return false;
}
int main(const int argc, char * argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 1)) {
    std::cout << "No se ha introducido el numero correcto de parametros\n";
    return 0;
  }
  int anio;
  std::cin >> anio;
  if ((anio % 4 == 0 && anio % 100 != 0) || (anio % 4 == 0 && anio % 100 == 0 && anio % 400 == 0)) {
    std::cout << anio << " es un anio bisiesto\n";
    return 0;
  }
  std::cout << anio << " no es un anio bisiesto\n";
  return 0;
}