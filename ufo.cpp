#include <iostream>
#include <cctype>
#include "ufo_functions.hpp"
using namespace std;
int main() 
{start:
  greet();
  string codeword="abraulhoque"; //this is the codeword the player is trying to guess.
  string answer="___________";//equal length of Abraul
  int misses=0;

  vector <char> incorrect;// here we will store those incorrect characters.

  bool guess=false; //to track if the player guessed correct or wrong.
  char letter; //to capture the player guessed letter.



  while(answer != codeword)
{
   if(misses==7)//we will allow 7 lives to guess right.
  {
    break;
  }
  
  display_misses(misses);//this function was used to serve as a interface to the game using asicii art.(this part was made by ai)

  display_status(incorrect, answer);//used to display current status.
  cout<<"Please enter your guess: ";
  cin>>letter;
  letter=tolower(letter);//so that player input is not case sensitive.

  for(int i=0; i< codeword.length(); i++)
  {
      if(letter==codeword[i])
      {
        answer[i]=letter;
        guess=true;
        
      }

  }

  if(guess)
  {
    cout<<"Correct!"<<endl;
  }
  else
  {
    cout<<"Incorrect! The tractor beam pulls the person in further."<<endl;
    incorrect.push_back(letter);
    misses++;
  }

  guess=false;
  
}

end_game(codeword,answer);

int another_game;
cout<<"\n Do you want to play another?"<<endl;
cout<<"   1)Yes (Press 1)"<<endl;
cout<<"   2)No  (Press 2) "<<endl;
cin>>another_game;
if(another_game==1)
{
  goto start;
}
}
