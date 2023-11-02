/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P59875-Top-ToBottom
  * @author Jose Alejandro Barreto Ramallo
  * @date 2 nov 2023
  * @brief Top to buttom
  * @bug There are no known bugs
  * @see https://jutge.org/problems/PXXX
  */

#include <iostream>

int main () {
  int numero_1, numero_2, numero_3;
  std::cin >> numero_1 >> numero_2;
  if (numero_1 == numero_2) {
    std::cout << numero_1 << std::endl;
    return 0;
  }
  if (numero_1 > numero_2) {
    numero_3 = numero_1;
    for (int i = numero_1; i >= numero_2; --i) {
      std::cout << numero_3 << std::endl;
      numero_3 = numero_3 -1;
    }
  }
  if (numero_2 > numero_1) {
    numero_3 = numero_2;
    for (int i = numero_2; i >= numero_1; --i) {
      std::cout << numero_3 << std::endl;
      numero_3 = numero_3 -1; 
    }   
  }
  return 0;
}