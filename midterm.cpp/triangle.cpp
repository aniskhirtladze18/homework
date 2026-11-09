#include <iostream>
using namespace std;

int main(){
    for ( int i{11}; i > 0 ; i -=2){
        for ( int space{}; space < (11-i)/2; space++){
            cout << " ";
        }

        for(int j{0}; j < i ; j++){
            cout << "*";
        }
        cout << "\n";
    }
}