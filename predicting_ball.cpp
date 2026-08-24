//A magic ball that predicts randomly and we defined 10 predictions.
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
cout<<"MAGIC 8-BALL: ";
srand(time(NULL));      //For our program to work, we need to get a different random number for each execution.This sets the “seed” of the random number generator.
int answer=rand() % 10; //random value ranges from 0-9
switch(answer)
{
  case 0: cout<<"It is certain";
          break;
    case 1:
      cout << "Signs point to yes.\n";
      break;
    case 2:
     cout << "Cannot predict now.\n";
      break;
    case 3:
      cout << "Concentrate and ask again.\n";
      break;
    case 4:
      cout << "Without a doubt.\n";
      break;
    case 5:
      cout << "Most likely.\n";
      break;
    case 6:
      cout << "Work it up!\n";
      break;
    case 7:
      cout << "My reply is no.\n";
      break;
    case 8:
      cout << "Outlook good.\n";
      break;
  case 9: cout<<"Very doubtful.\n";
          break;
    default: cout<<"Invalid. \n";
    break;

}


}
