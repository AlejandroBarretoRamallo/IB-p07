/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2022-2023
  *
  * @file P31111-Parentesis.cc
  * @author Jose Alejandro Barreto Ramallo
  * @date 2 nov 2023
  * @brief Imprime si estan bien cerrados o no los parentesis
  * @bug There are no known bugs
  * @see https://jutge.org/problems/PXXX
  */

#include <iostream>

int main() {
  char parentesis;
  int num_parentesis = 0;
  bool iguales = true;
  while (iguales && std::cin >> parentesis) {
    if (parentesis == '(') {
      ++num_parentesis;
    } 
    else {
      --num_parentesis;
    }
    if (num_parentesis < 0) {
        iguales = false;
    }
  }
  if (num_parentesis == 0) {
    std::cout << "yes\n";
  }
  else {
    std::cout << "no\n";
  }
  return 0;
}