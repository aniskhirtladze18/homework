#include <iostream>
using namespace std;

int main(){
    srand((time(0)));    
    int num;
    int secretnumber = rand() % 10;
    cout << secretnumber;

    cout << "Guess the numer: ";
    cin >> num;

    if ( num == secretnumber){
        cout<< "you won.\n";
    }
    else {
        for( int i {0}; i < 4; i++){
            cout << "Wrong, try again: ";
            cin >> num;
        if ( num == secretnumber) {
            cout << "you won. \n";
            break;
        }
        }
        
    }
    
    return 0;
}