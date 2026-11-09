#include <iostream>
using namespace std;

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