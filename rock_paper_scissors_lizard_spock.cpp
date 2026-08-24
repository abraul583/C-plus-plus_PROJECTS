/*It seems like when you know someone well enough, 75-80% of any Rock Paper Scissors games you play with that person end up in a tie.

Rock, Paper, Scissors, Lizard, Spock
This is the infamous game brought to popularity with the TV show The Big Bang Theory.

So, the rules are:  1.Scissors cuts paper     2.paper covers rock 
                    3.rock crushes lizard     4.lizard poison's spock 
                    5.spock smashes scissors  6.scissors decapitates lizard 
                    7.lizard eats paper       8.paper disproves spock
                    9.spock vaporizes rock    10.rock crushes scissors

I will compare the user's choice and the computer's chpoice and determine the winner.

*/

#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
srand(time(NULL));
int computer = rand() % 5 + 1; // we have namdom number that can be 1,2,3,4 and 5
mylabel:
int user = 0;
cout << "====================\n";
cout << "rock paper scissors lizard and spock!\n";
cout << "====================\n";

cout << "1) ✊\n"; //Rock
cout << "2) ✋\n"; //Paper
cout << "3) ✌️\n"; //Scissors
cout << "4) 🤏\n"; //Lizard
cout << "5) 🖖\n"; //Spock

cout << "shoot! ";
cin>>user;
int rock = 1;
int paper = 2;
int scissors = 3;
int lizard = 4;
int spock = 5;
cout<<"Computer: "<<computer<<endl;
if(user==scissors && computer==paper)
{
  cout<<"You cut paper!"<<endl;
}
else if(user==paper && computer==rock)
{
  cout<<"You covered rock!"<<endl;
}
else if(user==rock && computer==lizard)
{
  cout<<"You crushed lizard!"<<endl;
}
else if(user==lizard && computer==spock)
{
  cout<<"You poisoned spock!"<<endl;
}
else if(user==spock && computer==scissors)
{
  cout<<"You smashed the scissors!"<<endl;
}
else if(user==scissors && computer==lizard)
{
  cout<<"You decapitated lizard!"<<endl;
}
else if(user==lizard && computer==paper)
{
  cout<<"You ate paper!"<<endl;
}
else if(user==paper && computer==spock)
{
  cout<<"You disproved spock!"<<endl;
}
else if(user==spock && computer==rock)
{
  cout<<"You vaporized rock!"<<endl;
}
else if(user==rock && computer==scissors)
{
  cout<<"You crushed scissors!"<<endl;
}
else if(user==computer)
{
  cout<<"It's a tie."<<endl;
}
else
{
  cout<<"You Lost!"<<endl;
}


goto mylabel;


}
