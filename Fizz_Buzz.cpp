/*
It is a program that outputs numbers from 1 to 100.

But for multiples of 3, print Fizz instead of the number and for the multiples of 5, print Buzz. For numbers which are multiples of both 3 and 5 print, FizzBuzz.

*/
#include<iostream>
using namespace std;
int main()
{   int i=1;
    while(i<=100)
    {
      if(i%3==0 && i%5==0) //we have to write this condition first as we need to observe it first if this condition is met.
      {
        cout<<"FizzBuzz"<<endl;
      }
      else if(i%5==0)
      {
        cout<<"Buzz"<<endl;
      }
      else if(i%3==0 )
      {
        cout<<"Fizz"<<endl;
      }
      else
      {
        cout<<i<<endl;
      }

      ++i;

    }

}
