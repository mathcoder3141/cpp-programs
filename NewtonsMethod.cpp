/*
Randall Hall
C++ program to square root a number using Newton's method
*/

#include <cmath>
#include <iostream>
using namespace std;

double squareRoot(double number)
{
   const double ACCURACY = .0000001;
   double lower, upper, guess;

   if (number < 1)
   {
      lower = number;
      upper = 1;
   }
   else
   {
      lower = 1;
      upper = number;
   }
   while ((upper - lower) > ACCURACY)
   {
      guess = (upper + lower) / 2;
      if (guess*guess > number)
         upper = guess;
      else
         lower = guess;
   }
   return (lower + upper) / 2;
}
int main()
{
   double value;

      while (value > 0.0 || value < 0.0)
      {
         do 
         {
            cout << "Enter a number from 0 to 1000: ";
            cin >> value;
            if (value == 0)
            {
               break;
            }
            else 
               if (value < 0.0 || value > 1000.0)
               {
                  cout << "Number is not in proper range!" << endl;
               }
               else 
                  cout << "Square root of " << value << " is " << squareRoot(value) << endl;

         } while (value < 0.0 || value > 1000.0);  
      }
      cout << "Loop exiting!" << endl;
      return 0;
}
