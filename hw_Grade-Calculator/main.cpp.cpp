#include <iostream>
#include <array>

using namespace std;


/*///////////////////////////////////////////////
// Matthew McCourry (CS131 SPR - 2018)
// Project notes, user stories and objectives
//
// (Return the Average of Grades ) 
// Write a  function which:
// + gets 10 grades from the user, 
// + then put them in an array  
// + and returns the average of the grades.
////////////////////////////////////////////////*/

/*
 * [ ] get the input from the user gpa format (10 grades)
 * [ ] find average of number grades (sum / 10)
 * [ ] output gpa
 */


void getGrades();
double findGPA();

const int entries = 10;
double gradeSum = 0;
array<double, entries> grades {};

    

int main() {

  
  cout << "Enter the letter grades from your last 10 classes. \n" ;
  void getGrades();
  double findGPA
  
} // END OF MAIN

void getGrades() {
  //gets the input from the user in the form of a letter value for each iteration
  for(double elements : grades)
  cin >> grades;
}

double findGPA() {
  for (double elements : grades)
    gradeSum += elements;
  return gradeSum / entries;
}