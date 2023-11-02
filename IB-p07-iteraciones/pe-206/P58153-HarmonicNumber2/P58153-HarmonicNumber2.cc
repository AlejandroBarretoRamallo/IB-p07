/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P58153-HarmonicNumber2.cc
  * @author Jose Alejandro Barreto Ramallo
  * @date 2 nov 2023
  * @brief harmonic numbers
  * @bug There are no known bugs
  * @see https://jutge.org/problems/PXXX
  */

#include <iostream>
#include <iomanip>

int main() {
  std::cout << std::fixed << std::setprecision(10);
  int numero_1, numero_2;
  while (std::cin >> numero_1) {
    std::cin >> numero_2;
    double armonico{0.00};
    for (double cociente = numero_2 +1; cociente <= numero_1; ++cociente) {
      armonico += (1 / cociente);
    }
    std::cout << armonico << std::endl;
    armonico = 0;
  }
  return 0;
}