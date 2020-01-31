/* Problem 1 (intarray.cpp): Write a program that will read up to ten nonnegative integers into an array
called numberArray and then write the integers back to the screen (console output). For this exercise you
need not use any functions.
*/
#include <iostream>
#include <vector> // creating an array so including vector is needed
using namespace std;

int main(){
  const int NUM_VALS = 10; // 10 positive numbers
  vector <int> numberArray(NUM_VALS); // calling both numberArray and NUM_VALS = 10
  unsigned i; // utilizing i for the loops

  cout << "Please enter 10 non-negative integers below " << endl;

  //loop for the 10 numbers
  for (i = 0; i < numberArray.size(); ++i) {
    cout << "Number of your choice: ";
    cin >> numberArray.at(i); // this is adding the numbers into vector
  }
  cout << "The numbers entered are: "; // prints before displaying the numbers

  // loop for the numbers that were entered
   for (i = 0; i < numberArray.size(); ++i) {
      cout << numberArray.at(i) << " "; // prints all the numbers seperated by a space
   }
   return 0;
}
