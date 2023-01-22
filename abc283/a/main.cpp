#include <iostream>

int main()
{
  long int a{};
  int b{};
  std::cin >> a >> b;

  long int result{1};
  for (int i = 0; i < b; i++)
  {
    result *= a;
  }

  std::cout << result;

  return 0;
}

