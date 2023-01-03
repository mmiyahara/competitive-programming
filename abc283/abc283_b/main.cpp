#include <iostream>
#include <sstream>
#include <vector>

int main()
{
  // get n
  std::string n_temp;
  std::getline(std::cin, n_temp);
  int n{stoi(n_temp)};

  // get a
  std::vector<int>::size_type size_typed_n = static_cast<std::vector<int>::size_type>(n);
  std::vector<int> a(size_typed_n);

  std::string a_temp;
  std::getline(std::cin, a_temp);

  std::stringstream ss_a_temp(a_temp);
  std::string an_temp;
  int i{};
  while (std::getline(ss_a_temp, an_temp, ' '))
  {
    a.at(static_cast<std::vector<int>::size_type>(i)) = stoi(an_temp);
    i++;
  }

  // get q
  std::string q_temp;
  std::getline(std::cin, q_temp);
  int q{stoi(q_temp)};

  for (int i = 0; i < q; i++)
  {
    // get query
    std::string query{};
    std::getline(std::cin, query);

    // get query element
    std::stringstream ss_query(query);
    std::string q_e_temp;
    int j{};
    int q_e_1{};
    int q_e_2{};
    int q_e_3{-1};
    while (std::getline(ss_query, q_e_temp, ' '))
    {
      if (j == 0)
      {
        q_e_1 = stoi(q_e_temp);
      }
      else if (j == 1)
      {
        q_e_2 = stoi(q_e_temp);
      }
      else if (j == 2)
      {
        q_e_3 = stoi(q_e_temp);
      }
      j++;
    }

    if (q_e_1 == 1)
    {
      a.at(static_cast<std::vector<int>::size_type>(q_e_2 - 1)) = q_e_3;
    }
    else if (q_e_1 == 2)
    {
      std::cout << a.at(static_cast<std::vector<int>::size_type>(q_e_2 - 1)) << '\n';
    }
  }

  return 0;
}
