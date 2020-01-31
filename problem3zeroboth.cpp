/*
Problem 3 (zeroboth.cpp): Implement a void function called zeroBoth that has two call-by-reference
parameters, both of which are variables of type int, and sets the values of both variables to 0.
*/

#include <iostream>
using namespace std;

void zeroBoth(int& var1, int& var2){
  // setting both variables = 0
  var1 = 0;
  var2 = 0;
}

int main(){

  int first;
  int second;

  cout << "Please enter a number: ";
  cin >> first; // assigning numeber to first
  cout << "Please enter a second number: ";
  cin >> second; // assigning number to second
  zeroBoth (first,second); //calling function ... zeroing out both numbers given by user input
  cout << first << endl << second << endl;

return 0;

}
