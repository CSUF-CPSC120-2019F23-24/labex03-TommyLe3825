// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int height;
  std::cout << "Please enter the person's height in inches: " ;
  std::cin >> height;

  int heightfeet = height / 12;
  double inches = height % 12;
  std::cout << "That person is " << heightfeet << "'" << inches << "\"" << std::endl;

  return 0;

}
