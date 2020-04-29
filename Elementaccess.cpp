#include <iostream>
using namespace std;

int main()
{
   int elements[10];
   cout << "Enter elements of the array: ";

   for(int i = 0; i < 10; ++i)
      cin >> elements[i];

   cout << "You entered the following elements: ";
   for(int i = 0; i < 10; ++i)
      cout << endl << *(elements + i);

   return 0;
}
