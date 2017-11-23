#include <iostream>
#include <string>

using namespace std;
int main()
{
  string str;
  int nOfVowels;
  
  cout << "Input a word: " << endl;
  cin >> str;
  
  for(int i = 0; i < str.length(); i++)
  {
    if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' )
    nOfVowels++;
  }
  
  cout << "Vowels in string: " << nOfVowels << endl;
  
  return 0;
}
