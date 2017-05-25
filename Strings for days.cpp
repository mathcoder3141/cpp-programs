
/*
Randall Hall
C++ Program to display first & last 3 letters of string, and string backwards
*/


#include <iostream>
using namespace std;

int main() {   
   string First, Middle, Last, LFM, s1;
   int i;

   cout << "\n";

   cout << "Enter your first name: "; cin >> First;
   cout << "Enter your last name: "; cin >> Last;
   cout << "Enter your middle name: "; cin >> Middle;
   LFM = Last + ", " + First + ", " + Middle;
   cout << LFM << endl;
   cout << "\n";

   do 
   {
      cout << "Enter a string at least 8 characters long: "; 
      cin >> s1;
      if (s1.length() < 8)
         cout << "The string is too short." << endl;
   }  while (s1.length() < 8);
   cout << "The string has "; cout << s1.length(); cout << " in it." << endl;
   cout << "First three: ";
   for (i=0; i <= 2; i++)
   {
      cout << s1[i] << "";
   }
   cout << endl;
   cout << "Last three: "; cout << s1.substr(s1.length()-3,3); // displays last three string characters
  cout << endl; 
  for (i=s1.length(); i >= 0; i--)
   {
      cout << s1[i] << "";
   }
     
   return 0;
}
