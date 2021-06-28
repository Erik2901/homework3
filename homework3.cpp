#include <iostream>

// Задание 1,4
extern const int a;
extern const int b;
extern const int c;
extern const int d;
extern double dv;
//

int main()
{
    // Задание 1,4
    dv = a*(b + (static_cast<double>(c) / d));
    std::cout << dv << std::endl;
    //
    // Задание 2
    int q = 50;
    int w = (q <= 21) ? q - 21 : q - 21 << 1;
    std::cout << w << std::endl;
    //
    // Задание 3
    int arrm[3][3][3];
    int* pm = &arrm[1][1][1];
    *pm = 15;
    std::cout << *pm << std::endl;
    //
    system("pause");
    return 0;
}

