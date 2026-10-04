#include <iostream>

int main(){

    int a, b;
    std::cout << "provide two angles of a triangle:" << std::endl;
    std::cin >> a >> b;

    if ( a + b > 180 || a + b < 0){
        std::cout << "such triangle doesnt exist." << std::endl;
    }

    else {
        std::cout << "the third angle equals " << 180 - ( a + b) << std::endl;
    }

}