// This program calculates a person's height in feet (') and inches (").
#include <iostream>
int main()
{
  int height;
  double inches;
  double Official_height;
  // this will promt the user to input a height
  std::cout << "Please enter the persons height in inches:";
  std::cin >> height;
  // this will calculate the height
  Official_height = height/12;
  // Calulates the remainder, or inches
  inches = height % 12;
  //returns he height
  std::cout<<"That person is:" <<Official_height<< "\'" << inches<< "\"";
}
