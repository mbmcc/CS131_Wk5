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
 * [x] get the input from the user in percent format (10 grades)
 * [x] find average of number grades (sum / 10)
 * [x] output average
 */





int main (){
    double gradeSum = 0.00;

    cout << "Enter you last grades (in percent form)\n";
	array<double, 10> grades {};
	for(double &elements : grades){
		cin >> elements;
        gradeSum += elements;
    }
    cout << "Your Grade Average is: " << gradeSum / 10 <<endl;
}
