/*
Takes a phrase like "turpentine and turtles" or anything and translate it into its “whale talk” equivalent, "uueeieeauuee".

There are a few simple rules for translating text to whale language:

There are no consonants. Only vowels.
The u‘s and e‘s are extra long, so we must double them.
Once we have converted text to the whale language, the result is sung slowly, as is custom in the ocean.

*/
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() 
{
  string input;// to be translated into whale language.
  cout << "Enter text to translate: ";
  getline(cin,input);

  vector<char> vowels={'a','e','i','o','u'};//Whales only speak in vowels
  vector<char> result; //This will serve as a place to store the vowels from the input string
  for (int i=0; i<input.length(); i++)
  { 
    char c=tolower(input[i]);//first the input character is lowered here.

    for(int j=0; j<vowels.size(); j++)
    {
        if(c==vowels[j]) 
        {
          result.push_back(vowels[j]);
          if(vowels[j]=='u' || vowels[j]=='e')
          {
            result.push_back(vowels[j]);//The u‘s and e‘s are extra long.
          }
        }
    }
  }
cout<<"Whale says: ";
  for(int k=0; k<result.size(); k++)
  {
    cout<<result[k];
  }
cout<<endl;
}

