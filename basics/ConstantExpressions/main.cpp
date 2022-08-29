#include <iostream>

int main()
{
  // O valor integral pode ser usado sempre que o const inteiro for necessário, como argumentos de modelo e declarações de matriz
  // E quando um valor é calculado em tempo de copilação em vez de tempo de execução, ele ajuda sem programa a executar mais rapido
  // e utilizar menos memória.
  constexpr int eye_count{2};
  constexpr double PI{3.14};

  std::cout << eye_count << std::endl;
  std::cout << PI << std::endl;

  int leg_cout{2};
  // constexpr int arm_count{leg_cout}; ERROR
  constexpr int room_count{10};
  constexpr int door_count{room_count};
  const int table_cout{5};
  constexpr int chair_count{table_cout * 5};

  return 0;
}