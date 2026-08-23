/*
Dogs mature at a faster rate than human beings. If you own a dog, you might’ve heard this rule: one year for Snoopy equals seven years for you. Turns out, the math isn’t that simple. Dogs mature more quickly than we do early on.

Here’s how we can convert your dog’s age into human years:

The first two years of a dog’s life count as 21 human years.
Each following year counts as 4 human years.

*/

#include <iostream>

int main() {
  double dog_age;
  double early_years, later_years, human_years;
  std::cout<<"Enter your Dog's age:"; //enter your dog age
  std::cin>>dog_age;
  
if(dog_age>2)
{
 early_years=21;           //first two dog years is euqal to 21 human years
 later_years=(dog_age-2)*4;// after first 2 years every following dog      years is equal to 4 human years.
 human_years=early_years+later_years;
                           //Equivalent Human years.
}
else if(dog_age>0 && dog_age<=2)
{
  human_years=10.5*dog_age;
}
else
{
  std::cout<<"You entered wrong parameters.";
}

std::cout<<"Ruff ruff, I am "<<human_years<<" old in human years. \n";

}
