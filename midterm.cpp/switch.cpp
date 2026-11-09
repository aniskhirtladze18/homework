#include <iostream>
using namespace std;
//Write a program that asks the user to input a number between 0 and 5 representing a rating for a service and displays the corresponding feedback using a switch statement:
//5 => “Excellent Service!”;

//4 => “Good Service!”;

//3 => “Average Service”;

//0-2 => “Poor Service”;

//All other input => “Invalid input!”.

int main(){
    int num;
    cout << "Input a number representing our service: ";
    cin >> num;

    switch(num) {
        case 1:
        case 2:
        case 0: cout << "Poor service. \n"; break;
        case 3: cout << "Average service. \n"; break;
        case 4: cout << "Good service. \n"; break;
        case 5: cout << "Excellent service. \n"; break;
        default: cout << "Invalid INput. \n"; break;
    }
}