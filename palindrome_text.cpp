/*
A palindrome is any text that has the same characters backwards as it does forwards. For example, “hannah” and “racecar” are palindromes, while “menu” and “aardvark” are not.

I also independently tested for some edge cases like Capitalization or Spaces.
*/

#include <iostream>
#include <cctype>

using namespace std;

bool is_palindrome(string text)
{
  string lower_text;
  string backward_text;

  for(int j=0;j<text.length();++j)
  { if(text[j]==' ')   //single quotes for char comparison
    continue;
    char s=tolower(text[j]);
    lower_text +=s;
  }

  for(int i=lower_text.length()-1;i>=0;i--)
  {
    char c=lower_text[i];
    backward_text +=c;
  }
    if (backward_text==lower_text)
    {
      return true;
    }
    else
   {
      return false;
   }

}

int main() {
  
 cout << is_palindrome("madam") << "\n";
  cout << is_palindrome("ada") << "\n";
 cout << is_palindrome("lovelace") << "\n";
  cout << is_palindrome("Race Car") << "\n";
}
