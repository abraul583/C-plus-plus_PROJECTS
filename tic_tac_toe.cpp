/*
My idea: The Rules are that there are 2 players. 1 can place X another can place O.Its decided beforehand I will print this rule and show it to the players .
And its up to them to decide which player they will play. So,there is 9 turns in total as it is a 3x3 matrix game. And the game can be won if 1 player gets 3 X or O
in diagonal/horizontal/vertical.

As each players input data is predetermined,so I will only ask them where they wanna place that X or O.(Row and Column Number)
There are 2 arrays. Grid holds the int value corresponding to X and O. And updated_grid contains the corresponding character.
I built the convert_grid function to convert grid into updated_matrix.
And I also Showed the updated matrix after each turn. (A Function for display_matrix)
Now, I need to continuously look that if that condition is met for either of the players. (In the while loop)

*/
#include <iostream>
#include <vector>
#include "functions.cpp"
using namespace std;




void greet();
void convert_grid(int grid[3][3],char converted_grid[3][3]);
void display_matrix(char grid[3][3]);
bool is_player1(int grid[3][3]);
bool is_player2(int grid[3][3]);

int main()
{
    start:

  int grid[3][3]={0}; //I will take the user's input here. X as 1 and O as 0.
  char updated_grid[3][3];

  int i1,j1,i2,j2; //i1 and j1 is row and column number for player 1. i2 and j2 is for Player2
  int turns=1;

  greet();


  while(turns<9)
  {

      player1:

      cout<<"Player-1 where do you wanna place your 'X': (Enter the row and column number with a space to separate) ";
      cin>>i1>>j1;
      cout<<endl;

      if(i1>=1 && i1<=3 && j1>=1 && j1<=3)
      {
          if(grid [i1-1][j1-1] ==1 || grid [i1-1][j1-1] ==2) //checks if player1 or player2 already used that place.
          {
              cout<<"\tInvalid Input!!You overlapped.\n"<<endl;
              goto player1;
          }
          else
          {
           grid [i1-1][j1-1] =1;//When we update a matrix position here. All other 8 positions contain random, unpredictable numbers.But if we declare the matrix as 0 first then it wont happen.
           turns++;
           convert_grid(grid,updated_grid);
           display_matrix(updated_grid);




          }
      }

      else
      {
          cout<<"Invalid Input!!Try again."<<endl; //checks if the row and column the player is using is valid.
          goto player1;
      }

      if(is_player1(grid))
      {
          cout<<"Player-1 has won the game!"<<endl;
          break;
      }



      //For player-2.

      player2:

      cout<<"Player-2 where do you wanna place your 'O': (Enter the row and column number with a space to separate) " ;
      cin>>i2>>j2;
      cout<<endl;

      if(i2>=1 && i2<=3 && j2>=1 && j2<=3)
      {
          if(grid [i2-1][j2-1] ==1 || grid [i2-1][j2-1] ==2) //checks if player1 or player2 already used that place.
          {
              cout<<"\tInvalid Input!!You overlapped.\n"<<endl;
              goto player2;
          }
          else
          {
           grid [i2-1][j2-1] =2; // O means 2
           turns++;

           convert_grid(grid,updated_grid);//Before I sued char but as it returns only a char so there was an error.
           display_matrix(updated_grid);


          }
      }

      else
      {
          cout<<"Invalid Input!!Try again."<<endl;  //checks if the row and column the player is using is valid.
          goto player2;
      }

         if(is_player2(grid))
      {
          cout<<"Player-2 has won the game!"<<endl;
          break;
      }



  }
  if(turns==9)
  {
       cout<<"The Game is a TIE!\n";
  }

  cout<<"Wanna play another?(type 1 or 2)\n";
  cout<<"1) Yes \n";
  cout<<"2) No \n";
  int another;
  cin>>another;
  if(another==1)
  {
      goto start;
  }







}

















