#include <iostream>

int main()
{
    int a =8;
    int b =3;
    int c =a-b;
    
    std::cout << (a > b) << "\t";
    std::cout << (c < a) << "\t";
    std::cout << (a != b) << "\t";
    std::cout << (a == b) << "\t";
    std::cout << (a > b) << "\t";
    
    return 0;
}