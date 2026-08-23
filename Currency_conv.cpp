// let i have pesos,reais,soles..and convert all of them into dollar


#include <iostream>
using namespace std;
int main() 
{
  float pesos,reais,soles;
  float dollars=0;
  cout<<"Enter number of Colombian Pesos: ";
  cin>>pesos;
  cout<<"Enter number of Brazilian Reais: ";
  cin>>reais;
  cout<<"Enter number of Peruvian Soles: ";
  cin>>soles;
  dollars = (0.059*pesos)+(0.19*reais)+(0.30*soles); //pesos to dollars conversion rate=0.59, reais to dollar=0.19, soles to dollar=0.30
  cout<<"US Dollars = $"<<dollars;
}
