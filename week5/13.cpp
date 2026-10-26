#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "how many positive numbers to input  \n";
    cin >> n;


    for ( int i = 0 ; i < n; i++){
        double num; 
        cin >> num;
        if (num <= 0){
            cout << "negative input\n";
            return 0;
        }
    }
    cout << "all numbers positive:"; 
    return 0;
}