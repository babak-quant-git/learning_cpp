#include <iostream>

int main() {
  std::cout << "Enter temperature in degrees Celsius: ";

  double celsius{};
  std::cin >> celsius;

  double fahrenheit{celsius * 1.8 + 32.0};

  std::cout << "Temperature in Fahrenheit: " << fahrenheit << "\n";

  return 0;
}