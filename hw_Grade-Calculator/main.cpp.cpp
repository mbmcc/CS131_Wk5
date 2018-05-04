#include <iostream>
#include <array>

using namespace std;


/*///////////////////////////////////////////////
// Project notes, user stories and objectives
// (Return the Average of Grades ) 
// Write a  function which:
// + gets 10 grades from the user, 
// + then put them in an array  
// + and returns the average of the grades.
////////////////////////////////////////////////*/

/*
 * [ ] get the input from the user gpa format (10 grades)
 * [ ] if letters convert to numbers
 * [ ] find average of number grades (sum / 10)
 * [ ] output gpa
 */


void getGrades();
double findGPA();

int main() {
  
  int entries = 10;
  array<double, entries> grades {};
  double gradeSum = 0;
    
  cout >> "Enter the letter grades from your last 10 classes. \n" ;
  getGrades();
  averageGrades();
  
}

getGrades() {
  //gets the input from the user in the form of a letter value for each iteration
  for(elements : grades)
  cin >> grades;
}

findGPA() {
  for (elements : grades)
    gradeSum += elements;
  return gradeSum / entries;
}