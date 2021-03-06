/*
Your initial response is due by midnight, PST on Thursday, May 3. Respond to at least two of your peers is due by midnight, PST on Sunday, May 6. 
1. (One-Dimensional array Questions) Write single statements that perform the following one-dimensional array operations:
a) Initialize the 10 elements of integer array counts to zero.
b) Add 1 to each of the 15 elements of integer array bonus.
c) Read 12 values for the array of doubles named monthlyTemperatures from the keyboard.
d) Print the 5 values of integer array bestScores in column format.
*/
#include <iostream>
#include <iomanip>
#include <array>
#include <cstring>
#include <cstdlib>

using namespace std;

// Example A 
int main(){
   //TEST ARRAY
    int testArray[10] = {0,1,2,3,4,5,6,7,8,9};
    std::cout << "Test Array contains" << std::endl;
    for (int elements : testArray)
            std::cout << elements << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    //DB Item A
    int firstArray[10] = {};
    std::cout << "First Array contains" << std::endl;
    for (int elements : firstArray)
        std::cout << elements << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    //DB Item B
    std::cout << "Bonus Array contains" << std::endl;
    int bonus[15] = {};
    for (int elements : bonus)
        std::cout << elements << " ";
    std::cout << std::endl;

    for (int &elements : bonus)
        elements ++;

    for (int elements : bonus)
        std::cout << elements << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    //DB Item C
    double monthlyTemperature[12] = {};
    std::cout << "enter the months temperature\n";
        for (double &elements : monthlyTemperature)
        std::cin >> elements;
        for (double elements : monthlyTemperature)
        std::cout << elements << " ";
    std::cout << std::endl;
    std::cout << std::endl;

    /*//DB Item D
    int bestScore[5] = {10, 12, 22, 33, 17};
    cout << "The best scores for the round were: ";
    for (int elements : bestScore)
        std::cout << setw(5) << elements << endl;
    */  
      
    //DB Item extra
    array<int, 5> bestScore = {10, 12, 22, 33, 17};
    cout << "The best scores for the round were: \n";
    for (int elements : bestScore)
        std::cout << setw(5) << elements << endl;
        

}
