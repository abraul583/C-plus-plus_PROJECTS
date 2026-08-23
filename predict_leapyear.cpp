/*Takes a year as input.
Checks to see if the year is a four-digit number.
Displays whether or not the year falls on a leap year.
*/
#include <iostream>

int main() {
  
  int y ;
  
  std::cout << "Enter year: ";
  std::cin >> y;
  
  if (y < 1000 || y > 9999) {
    
    std::cout << "Invalid entry.\n";
    
  }
  else if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0) {

    std::cout << y;
    std::cout << " falls on a leap year.\n";
    
  }
  else {
    
    std::cout << y;
    std::cout << " is not a leap year.\n";
    
  }
  
}
