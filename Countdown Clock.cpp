/*
Randall Hall

C++ Program to countdown from a entered hour and minute
*/

#include <iostream>
using namespace std;
int main () 
{
   int hour, minute;

   do {
     cout << "Please enter a hour from 0 to 5: ";
     cin >> hour;
  
   if (hour < 0 || hour > 5)
       cout << "Please re-read the directions" << endl;
     } while (hour < 0 || hour > 5);
      

   do {
      cout << "Please enter a minute from 0 to 59: ";
      cin >> minute;
  
      if (minute < 0 || minute > 59)
         cout << "Please re-read the directions" << endl;
      } while (minute < 0 || minute > 59);

   cout << "\n";
   cout << "Countdown Begins." << endl;
   if (hour < 10 || minute < 10);
   cout << "You have 0" << hour << ":0" << minute << " to get out of here!\n" ;
   cout << "\n";
   for (hour = hour; hour >= 0; hour--) 
   {
      for (minute = minute; minute >= 0; minute--)
      {
         if (hour < 10) cout << "0";
            cout << hour << ":";      
         if (minute < 10) cout << "0";
            cout << minute << endl;
      }
      minute = 59;
   }
   cout << "KABLOOM!" << endl;
   return 0;
}