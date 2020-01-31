/*
Problem 5 (conversion.cpp): Write a program that will read in a length in feet and inches and output the
equivalent length in meters and centimeters. Use at least three functions: one for user input, one or more
for calculating, and one for output(console). Include a loop that lets the user repeat this computation for
new input values until the user says he or she wants to end the program (user has to type exit). There are
0.3048 meters in a foot, 100 centimeters in a meter, and 12 inches in a foot.
*/
#include <iostream>
#include <string>
using namespace std;

double inches;
double feet;
void userInput(double& feet, double& inches){
  cout << "How many feet: " << endl; // asking the user for feet
  cin >> feet;
  cout << "How many inches: " << endl; // asking the user for inches
  cin >> inches;
}
double inchesToCentimers(double& feet, double& inches){ // converting

  double centimeters;
  double totalInches;
  double feetInInches;
  feetInInches = feet * 12; //converts to inches
  totalInches = feetInInches + inches;
  centimeters = totalInches * 2.54; // converts to centimeters
  return centimeters;
}
  double centimetersToMeters(double& feet, double& inches){
    double totalMeters;
    int wholeMeters;
    // converting centimeters to meters
    totalMeters = inchesToCentimers (feet, inches) / 100;
    wholeMeters = static_cast <int> (totalMeters);
    return totalMeters;
  }

  double finalCentimeters;
  double totalMeters;
// converts remaining meters to centimeters
  double remaining (double& feet, double& inches){
    int wholeMeters;
    double finalCentimeters;
    double totalMeters;

    totalMeters = centimetersToMeters(feet, inches) / 100;
    wholeMeters = static_cast <int> (totalMeters);

    return totalMeters;

    finalCentimeters = (totalMeters - wholeMeters) * 100;

    return finalCentimeters;
  }
  void endResult(){ // output function that outputs the feet to inches to meters to centimeters
    userInput(feet, inches);
      cout << feet << " feet" << " and  " << inches << " inches " << "is equal to "
      << centimetersToMeters (feet, inches) << " meters and "
      << remaining (feet, inches) << " centimeters" << endl;
  }

int main(){
// while loop that asks the users to continue for another conversion or to exit

  string convertAgain;
  while (convertAgain != "NO"){
    endResult();
    cout << "Please enter YES to use converter again, enter NO to exit ";
    cin >> convertAgain;
  }
  return 0;
}
