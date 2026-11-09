#include <iostream>
using namespace std;

int getSum(int num);
int main(){
    int num;
    cout << "Insert the num: ";
    cin >> num;
    cout << "The sum is " << getSum(num) << '\n';
}

int getSum(int num){
    int sum{0};
    while ( num > 0){
        int lastdigit = num % 10;
        sum = sum * 1 + lastdigit;
        num /=10;
    }
    return sum;
}