/*
  In algebra, a quadratic equation is an equation having the form: ax^2 + bx + c
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
  int a,b,c;
  cout<<"Enter the constants of quadratic equations: "<<"\na:";
  cin>>a;
  cout<<"\n"<<"b: ";
  cin>>b;
  cout<<"\n"<<"c: ";
  cin>>c;
  double root1,root2;
  double discriminant=(b*b-4*a*c);
  if(discriminant > 0)
  {
  root1=(-b+sqrt(discriminant))/(2*a);
  root2=(-b-sqrt(discriminant))/(2*a);
  cout<<"Root 1 is: "<<root1<<"\nRoot 2 is:"<<root2<<"\n";
  }
  else if(discriminant == 0)
  {
    root1=(-b+sqrt(discriminant))/(2*a);
    root2=root1;
    cout<<"Root 1 is: "<<root1<<"\nRoot 2 is:"<<root2<<"\n";
  }
  else if(discriminant < 0)
  { discriminant=abs(discriminant);
    double x=(-b)/(2*a);
    double y=(sqrt(discriminant))/(2*a);
    cout<<"Root 1 is: "<<x<<" + i"<<y<<"\nRoot 2 is: "<<x<<" - i"<<y<<"\n";
  }
else{
  cout<<"Invalid Input!!";
}
}
