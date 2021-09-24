// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#ifndef _KP4_SRC_MY_HEADER_IMPL_H_
#define _KP4_SRC_MY_HEADER_IMPL_H_

#include <KP4/my_header.h>

#include <iostream>
#include <list>
#include <complex>

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

#endif //Header Guard