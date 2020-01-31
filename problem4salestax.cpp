/*
Implement a function called addTax. The function addTax has two formal
parameters: taxRate, which is the amount of sales tax expressed as a percent; and cost, which is the cost
of an item before tax. The function returns the value (float) of cost so that it includes sales tax
*/

#include <iostream>
using namespace std;

float addTax(float taxRate, float cost){

  float totalCost;
  totalCost = cost + (cost * taxRate); // calculating total cost
  return totalCost;
}

int main(){
  float tax;
  float itemCost;

  cout << "Please enter the cost of item: ";
  cin >> itemCost; // assigning cost to item cost
  cout << "Please enter the tax as decimal: ";
  cin >> tax; // assigning tax

  cout << "The item with tax is: " << addTax(tax, itemCost) << endl; // total amount including tax

  return 0;


}
