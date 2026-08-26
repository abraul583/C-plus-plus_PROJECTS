/*
a program to find the sum of even numbers and the product of odd numbers in a vector.

*/
#include<iostream>
#include<vector>
using namespace std;
int main()
{
  vector<int> numbers={2, 4, 3, 6, 1, 9};// let, the number are these.
  int sum=0;
  int product=1;
  for(int i=0;i<numbers.size(); i++)
  {
    if(numbers[i]%2==0)
    {
      sum += numbers[i];
    }
    else if(numbers[i]%2==1)
    {
      product *=numbers[i];
    }
    else
    {
      cout<<"INVALID!!";
    }
   

  }
  cout<<"Sum of even numbers is: "<<sum<<endl;
    cout<<"Product of odd numbers is: "<<product<<endl;

}
