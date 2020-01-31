/*
Write code that will fill the array a (declared below) with numbers typed in at
the key- board. The numbers will be input five per line, on four lines (although your solution need not
depend on how the input numbers are divided into lines).
*/

#include <iostream>
using namespace std;

int main(){
  int a[4][5]; //initializes a 4x5 array
  int i; // row
  int j; // column

  cout << "Please enter 20 numbers below " << endl << endl; // asking for user input
  for (i = 0; i < 4; ++i){ // row loop
    for (j = 0; j < 5; ++j){ // column loop
      cout << "Please enter a number: "; // asking for user input 
      cin >> a[i][j];
    }
  }

  for (i = 0; i < 4; ++i){ // printing the rows
    for (j = 0; j < 5; ++j){ // printing columns
      cout << a[i][j] << " ";
    }
  }
  return 0;
}
