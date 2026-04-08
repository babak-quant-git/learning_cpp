#include <iostream>

int main() {
  int number{13};
  double price{5.4};
  bool is_ready{true};

  std::cout << number << " is " << sizeof(number) << " bytes\n";
  std::cout << price << " is " << sizeof(price) << " bytes\n";
  std::cout << is_ready << " is " << sizeof(is_ready) << " byte\n";

  std::cout << &number << "\n";
  std::cout << &price << "\n";
  std::cout << &is_ready << "\n";

  return 0;
}