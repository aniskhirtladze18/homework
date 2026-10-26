#include <iostream>
#include <cmath>
using namespace std;
//3)   Write a Program to Find the Number of Digits of a number
int main()
{
    long num; // declare the variable for the number 
    cout << "provide a number: "; //prompt the user 
    cin >> num; //input the number 
    
    if ( num == 0 ) {
        cout << " its 1 digit ";

    }
    
    long newnum = abs(num);
    int digit = 0;
    while ( newnum > 0){
        newnum /= 10;
        digit++;
    }

    cout << "number of digits: " << digit << endl;
    return 0;
}