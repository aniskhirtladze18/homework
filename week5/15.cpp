#include <iostream>
using namespace std;
// Write a program to Reverse an Integer
int get_rev(int num);
int main(){
    int num;
    cout << "provide integer : ";
    cin >> num;

    cout << get_rev(num) << '\n';
    return 0;


}

int get_rev(int num){
    int rev = 0;
    while (num != 0){
        int lastdig = num % 10;
        rev = rev * 10 + lastdig;
        num /= 10;
    }

    return rev;
}