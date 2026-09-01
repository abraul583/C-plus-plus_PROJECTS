#include <iostream>
#include <vector>
using namespace std;


void greet()
{

  cout<<"====================\n";
  cout<<"  Tic Tac Toe Game\n";
  cout<<"====================\n";
  cout<<"There are 2 players in this game.\n";
  cout<<"Player-1 plays with 'X' and Player-2 plays with 'O'. We suggest you choose your player beforehand.\n";

  cout<<"\nThe 2D game Board is:\n";
  cout<<"--------------------------\n";
  cout<<"||  11  ||  12  ||  13  ||\n";
  cout<<"--------------------------\n";
  cout<<"||  21  ||  22  ||  23  ||\n";
  cout<<"--------------------------\n";
  cout<<"||  31  ||  32  ||  33  ||\n";
  cout<<"--------------------------\n";
  cout<<"\nHere 31 denotes Row-3 and Column-1, We can place your signs in these places."<<endl;
  cout<<endl;
}


void convert_grid(int grid[3][3],char converted_grid[3][3])
{

    for(int i=0;i<3;++i)
    {
        for(int j=0;j<3;++j)
        {
            if(grid[i][j]==1)
            {
                converted_grid[i][j]='X';
            }
            else if(grid[i][j]==2)
            {
                converted_grid[i][j]='O';
            }
            else
            {
                converted_grid[i][j]=' ';
            }
        }
    }


}




void display_matrix(char grid[3][3])
{
    cout<<"\nThe 2D game Board is:\n";
  cout<<"-----------------------\n";
  cout<<"||  "<<grid[0][0]<<"  ||  "<<grid[0][1]<<"  ||  "<<grid[0][2]<<"  ||\n";
  cout<<"-----------------------\n";
  cout<<"||  "<<grid[1][0]<<"  ||  "<<grid[1][1]<<"  ||  "<<grid[1][2]<<"  ||\n";
  cout<<"-----------------------\n";
  cout<<"||  "<<grid[2][0]<<"  ||  "<<grid[2][1]<<"  ||  "<<grid[2][2]<<"  ||\n";
  cout<<"-----------------------\n";
  cout<<endl;

}




bool is_player1(int grid[3][3])
{

    if(grid[0][0]==1 && grid[0][1]==1 && grid[0][2]==1)
    {
        return true;
    }
    else if(grid[1][0]==1 && grid[1][1]==1 && grid[1][2]==1)
    {
        return true;
    }
    else if(grid[2][0]==1 && grid[2][1]==1 && grid[2][2]==1)
    {
        return true;
    }
    else if(grid[0][0]==1 && grid[1][0]==1 && grid[2][0]==1)
    {
        return true;
    }
     else if(grid[0][1]==1 && grid[1][1]==1 && grid[2][1]==1)
    {
        return true;
    }
     else if(grid[0][2]==1 && grid[1][2]==1 && grid[2][2]==1)
    {
        return true;
    }
     else if(grid[0][0]==1 && grid[1][1]==1 && grid[2][2]==1)
    {
        return true;
    }
     else if(grid[2][0]==1 && grid[1][1]==1 && grid[0][2]==1)
    {
        return true;
    }

    else{
        return false;
    }
}




bool is_player2(int grid[3][3])
{

    if(grid[0][0]==2 && grid[0][1]==2 && grid[0][2]==2)
    {
        return true;
    }
    else if(grid[1][0]==2 && grid[1][1]==2 && grid[1][2]==2)
    {
        return true;
    }
    else if(grid[2][0]==2 && grid[2][1]==2 && grid[2][2]==2)
    {
        return true;
    }
    else if(grid[0][0]==2 && grid[1][0]==2 && grid[2][0]==2)
    {
        return true;
    }
     else if(grid[0][1]==2 && grid[1][1]==2 && grid[2][1]==2)
    {
        return true;
    }
     else if(grid[0][2]==2 && grid[1][2]==2 && grid[2][2]==2)
    {
        return true;
    }
     else if(grid[0][0]==2 && grid[1][1]==2 && grid[2][2]==2)
    {
        return true;
    }
     else if(grid[2][0]==2 && grid[1][1]==2 && grid[0][2]==2)
    {
        return true;
    }

    else{
        return false;
    }
}
