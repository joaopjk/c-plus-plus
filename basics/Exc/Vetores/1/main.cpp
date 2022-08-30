#include <iostream>

int main()
{
  int lista[12]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
  int posX{0}, posY{0};

  std::cout << "Digite um número de 0 a 11: " << std::endl;
  int numero_um{0};
  std::cin >> numero_um;

  std::cout << "Digite outro número de 0 a 11: " << std::endl;
  int numero_dois{0};
  std::cin >> numero_dois;

  posX = lista[numero_um];
  posY = lista[numero_dois];

  std::cout << "A soma dos 2 números encontrados é: " << posX + posY << std::endl;

  return 0;
}