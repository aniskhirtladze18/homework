#include <iostream> 
using namespace std;
//Write the code, which finds range of ascii codes:
// ა) From 'A' to 'Z'. (note: it’s enough to print codes of 'A' and  'Z'). 
int main()
{
    char A = 'A';
    char Z = 'Z';

    cout << "the ASCII of A is " << static_cast<int>(A) << endl;
    cout << "the ascii of Z is " << static_cast<int>(Z) << endl;

    return 0;
}