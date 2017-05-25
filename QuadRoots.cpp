/*
Randall Hall
C++ program that will compute roots of a quadratic function, if they exist
*/

#include <cmath>
#include <iostream>
using namespace std;

double QuadRoot (double a, double b, double c)
{
   double D;
   D = (b*b) - (4*a*c);
   return D;  
}

int main () {

   double a, b, c, D, D2, D3;                   

   do {
      cout << "Please enter a number between -100.0 and 100.0 for x^2: "; 
      cin >> a;
      if (a < -100.0 || a > 100.0)
      	cout << "The number you have entered is not valid \n";
   } while (a < -100.0 || a > 100.0);
  
   do {
      cout << "Please enter a number between -100.0 and 100.0 for x: "; 
      cin >> b;
      if (b < -100.0 || b > 100.0)
      	cout << "The number you have entered is not valid \n";
   } while (b < -100.0 || b > 100.0);


   do {
      cout << "Please enter a number between -100.0 and 100.0 for the constant: "; 
      cin >> c;
      if (c < -100.0 || c > 100.0)
      	cout << "The number you have entered is not valid \n";
   } while (c < -100.0 || c > 100.0);

   cout << "\n\n";
   D = QuadRoot(a, b, c);

   D2 = (-b+sqrt(D))/(2*a);

   D3 = (-b-sqrt(D))/(2*a);

   if (D < 0) { 
      cout << "The determinant is less than 0 so the roots are imaginary/not real" << endl;
   };      
   if (D == 0) {
      cout << "The determinant is 0 so there will only be one root, the root is " << D2 << endl << endl;
   }; 
   if (D > 0) {
      cout << "The determinant is greater than 0 so there will be two roots, the roots are " << D2 << " and " << D3 << endl << endl;
   };



   return 0;
}
