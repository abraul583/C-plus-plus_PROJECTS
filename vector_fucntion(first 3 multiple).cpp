/*
The function should return an vector of the first three multiples of num in ascending order.

For example, first_three_multiples(7) should return a vector with 7, 14, and 21.
*/

#include <iostream>
#include <vector>
using namespace std;

vector <int> first_three_multiples(int num) //declaring a return type vector function
{
  vector <int> a(3);                //we cant use [] to declare vector size.
  for(int i=0;i<3;i++)
  {
    a[i]=num*(i+1);
  }
  return a;
}

int main() 
{
vector <int> element(3); 
element= first_three_multiples(8);
  
  for (int i=0;i<3;++i) 
  {
    cout << element[i] << "\n";
  }
  
}
