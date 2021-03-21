// Programmer: Matt Brundage II
// Date: 3/20/21

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Declare Variables
    double tuitionRate = 0.0;
    double creditHours = 0.0;
    double totalCost = 0.0;
    char another = ' ';

    //Display Heading
    cout << "STUDENT TUITION TABLE";
    
    //Prime Read
    cout << "Enter a student? (Y/N) ";
    cin >> another;
    do //Begin Loop
    {
       //Request Input
    cout << "What is the tuition rate? ";
    cin >> tuitionRate;
    cout << "How many credit hours? (Max 12) ";
    cin >> creditHours;

    //Calculate Tuition
    totalCost = creditHours * tuitionRate;

    //Display Output
    cout << "The tuition cost is: $" << totalCost << endl;

    //Repeat or Terminate Loop
    cout << "Enter another student? (Y/N)";
    cin >> another;
    } while (toupper(another) == 'Y'); //End Loop

    //Terminate Program
    cout << "Tuition Program Completed.";


}   //End Program