#include <iostream>
#include <string>
using namespace std;

//Write a program in C++ to find Size of fundamental data types.

int main()
{
    string  data_type;
    cout << "which data type? integer, double, floater or a boolean? " <<endl;
    cin >> data_type;
    
    if ( data_type == "boolean" )
    {
            cout << "the size of a boolean is " << sizeof(bool) << " bytes." <<endl;
    } 

    else if ( data_type == "integer") {
        cout << "the size of an integer is " << sizeof(int) << " bytes" << endl;

    }
    
    else if ( data_type == "double") {
        cout << "the size of a double " << sizeof(double)<< " bytes." << endl;
        
    }

    else if ( data_type == "floater")
    {
        cout << "the size of a floater is " << sizeof(float) << " bytes." << endl;

    }

    else {
        cout << "provide valid input.\n" << endl;
    }
    
return 0;

}