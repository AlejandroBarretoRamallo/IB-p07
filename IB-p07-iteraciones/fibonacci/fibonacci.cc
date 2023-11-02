/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2023-2024
  *
  * @file sum_of_digits.cc
  * @author alu0101552774@ull.edu.es
  * @date 20 oct 2023
  * @brief Imprime los N numeros de la serie de fibonacci
  * @bug There are no known bugs
  * @see https://jutge.org/problems/P48107
  */
#include <iostream>

void PrintProgramPurpose() {
  std::cout << "Este programa recibe un numero n y  imprime el numero n de la serie de fibonacci \n";
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
  int num_actual = 0, num_siguiente = 1, N;
  std::cin >> N;
  if (N == 1) {
    std::cout << num_actual << std::endl;
    return 0;
  }
  if (N == 2) {
    std::cout << num_actual << " " << num_siguiente << std::endl;
    return 0;
  }
  std::cout << num_actual << " " << num_siguiente << " ";
  for(int i = 3; i <= N; ++i) {
    int a = num_siguiente;
    num_siguiente = num_actual + num_siguiente;
    num_actual= a;
    std::cout << num_siguiente << " ";
  }
  std::cout << std::endl;
  return 0;
}