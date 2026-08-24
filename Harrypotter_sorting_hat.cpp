/*The Sorting Hat is a talking hat at Hogwarts that magically determines which of the four school Houses each new student belongs most to.
This project was dictated in a course I attended.There the points of each questions were given.However I tried to work on those logics to make the code as simple as possile.

  */

#include<iostream>
using namespace std;
int main()
{
 int gryffindor=0,hufflepuff=0,ravenclaw=0,slytherin=0; //we will do a point based system.
 int answer1,answer2,answer3,answer4;//there are 4 questions and we will store the muggle's answers here.
cout<<"The Sorting Hat Quiz! \n";
cout<<"Q1) When I'm dead, I want people to remember me as: \n";
cout<<"\t1) The Good\n"<<"\t2) The Great\n"<<"\t3) The Wise\n"<<"\t4) The Bold\n";
cout<<"What will be your answer: ";
cin>>answer1;
switch(answer1)
{
  case 1: ++hufflepuff;
  break;
  case 2: ++slytherin;
  break;
  case 3: ++ravenclaw;
  break;
  case 4: ++gryffindor;
  break;
  default:cout<<"Invalid input. \n";
  break;
}

cout<<"Q2) Dawn or Dusk? \n"<<"\t1) Dawn \n"<<"\t2) Dusk \n";
cout<<"What will be your answer: ";
cin>>answer2;
if(answer2==1)
{
  ++gryffindor;
  ++ravenclaw;
}
else if(answer2==2)
{
  ++hufflepuff;
  ++slytherin;
}
else
{
  cout<<"Invalid Input.\n";
}

cout<<"Q3) Which kind of instrument mose pleases your ear? \n"<<"\t1) The violin \n"<<"\t2) The tumpet\n"<<"\t3) The piano \n"<<"\t4) The drum \n";
cout<<"What will be your answer: ";
cin>>answer3;

switch(answer3)
{
  case 1: ++slytherin;
  break;
  case 2: ++hufflepuff;
  break;
  case 3: ++ravenclaw;
  break;
  case 4: ++gryffindor;
  break;
  default:cout<<"Invalid input. \n";
  break;
}


cout<<"Q4) Which road tempts you most? \n"<<"\t1) The wide, sunny grassy lane \n"<<"\t2) The narrow, dark, lantern-lit alley \n"<<"\t3) The twisting, leaf-strewn path through woods \n"<<"\t4) The cobbled street lined (ancient buildings) \n";
cout<<"What will be your answer: ";
cin>>answer4;


switch(answer4)
{
  case 1: ++hufflepuff;
  break;
  case 2: ++slytherin;
  break;
  case 3: ++gryffindor;
  break;
  case 4: ++ravenclaw;
  break;
  default:cout<<"Invalid input. \n";
  break;
}

cout << "\nCongrats on being sorted into... ";


if(ravenclaw>=gryffindor &&  ravenclaw>=slytherin && ravenclaw>=hufflepuff)
{
  cout<<"Ravenclaw!\n";
}
else if(gryffindor>=ravenclaw &&  gryffindor>=slytherin &&  gryffindor>=hufflepuff)
{
  cout<<"Gryffindor!\n";
}
else if(slytherin>=ravenclaw && slytherin>=gryffindor && slytherin>=hufflepuff)
{
  cout<<"Slytherin!\n";
}
else if(hufflepuff>=ravenclaw && hufflepuff>=slytherin && hufflepuff>=gryffindor)
{
  cout<<"Hufflepuff\n";
}
else
{
  cout<<"INVALID.\n";
}



}
