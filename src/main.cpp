// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++ and C#: http://www.viva64.com

#include <KP4/my_header.h> //PrintList, SortByGreater, SquareContainer

#include <list> //std::list
#include <complex> //std::complex
#include <iostream> //std::cout
#include <iomanip> //std::setfill, std::setw

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