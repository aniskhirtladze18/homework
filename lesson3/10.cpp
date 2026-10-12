#include <iostream>
using namespace std;
//4. Find minimum of two chars. Print its value and code.
int main()
{
    char x, z;
    cout << "provide single characters to find the  minimum \n ";
    cin >> x >> z;

    if ( int(x) > int(z)){
        cout << x << "'s value is greated in ASCII. it equates to" << int(x) <<endl;
        
    }

    else if ( int(x) < int(z) ) {
        cout << z <<"'s value is  greated in ASCII, equating to" << int(z) << endl;
    }
    else {
        cout << "both these characters are equal to " << int(x) << endl;
    }
    }
