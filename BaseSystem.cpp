/*
Randall Hall
C++ program to convert an integer in base 10 to a defined base
*/

#include <iostream>
using namespace std;

void decToBin (int, int);
int main() 

{
    int decimal;  
    int base;
    
    cout << "Enter a non-negative base ten integer to convert to a different base: ";
    cin >> decimal;
    cout << "Convert to what base? "; 
    cin >> base;
 
    do
    {
        if (decimal >= 0)
        {   
            cout << "" << decimal << " (base 10) = ";
            decToBin (decimal, base); 
            cout << " (base " << base << "). " << endl;
        }
        else
             cout << "" << decimal << " is not a non-negative integer. " << endl;
     } while (cin >> decimal); 
     return 0;
}

void decToBin(int num, int base)

{
      if (num > 0)   
      {
          decToBin (num/base, base);
          cout << num % base;
      } 
      else
       cout << "0";
}
