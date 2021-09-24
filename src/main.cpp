// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <complex>
#include <iostream>
#include <list>
#include <functional>
#include <iomanip>

template <class T>
void PrintList(const T &container)
{
  for (auto x : container)
  {
    std::cout << x << " ";
  }
  std::cout << std::endl;
}

template <class T>
void SquareContainer(T &container)
{
  int size = container.size();
  for (; size > 0; size--)
  {
    container.push_back(container.front() * container.front());
    container.pop_front();
  }
}

template<class T>
bool operator>(const std::complex<T> &a, const std::complex<T> &b)
{
  return std::abs(a) > std::abs(b);
}

template <class T>
void SortByGreater(T &container)
{
  container.sort(std::greater<typename T::value_type>());
}

template<class T>
void SortByGreater(std::list<std::complex<T>> &container)
{
  container.sort([](std::complex<T> a, std::complex<T> b)
                 { return std::abs(a) > std::abs(b); });
}

int main()
{
  std::list<double> double_list = {1, 5, 3};
  std::cout << "List with doubles: " << std::endl;
  PrintList(double_list);
  std::cout << "SortByGreater: " << std::endl;
  SortByGreater(double_list);
  PrintList(double_list);
  SquareContainer(double_list);
  std::cout << "SquareContainer: " << std::endl;
  PrintList(double_list);

  std::cout << std::endl;
  //setfill - changes the fill character
  //setw - changes the width of next output field
  std::cout << std::setfill('-') << std::setw(100) << "" << std::endl;
  std::cout << std::endl;
  
  std::list<std::complex<int>> complex_list = {std::complex<int>(1, 5), std::complex<int>(5, 7), std::complex<int>(-5, 7)};
  std::cout << "List with complexes: " << std::endl;
  PrintList(complex_list);
  std::cout << "SortByGreater: " << std::endl;
  SortByGreater(complex_list);
  PrintList(complex_list);
  SquareContainer(complex_list);
  std::cout << "SquareContainer: " << std::endl;
  PrintList(complex_list);
}