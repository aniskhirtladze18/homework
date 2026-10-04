#include <iostream>
#include <string>
using namespace std;

//Display arithmetic operations with mixed data type :
int main()
{
    double a;
    double b;
    char op;
    cout << "provide a double and an integer" <<endl;
    cin >> a >> b;

    cout << "which arithmetic operation? + / * -" <<endl;
    cin >> op ;

    if ( op == '+'){
        cout << a + b << endl;
    }

    else if ( op  == '/'){
        cout << a / b << endl;
    }

    else if ( op == '-'){
        cout << a - b << endl;

    }

    else if ( op == '*')
    {
        cout << a * b << endl;
    }
    
    else {
        cout << "provide valid input" <<endl;
    }
return 0;

}