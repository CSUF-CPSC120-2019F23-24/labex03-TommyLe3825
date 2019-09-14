// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main()
{
  int height;

  std::cout << "Please enter the person's height in inches: " ;
  std::cin >> height; // the input height

  int heightfeet = height / 12; //decimal portion is cut off for feet
  double inches = height % 12; //using modulus to give us remainder
  std::cout << "That person is " << heightfeet << "'" << inches << "\"" << std::endl;

  return 0;

}
