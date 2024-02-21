#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    short a0;
    unsigned short a1;

    int a2;
    unsigned int a3;

    long a4;
    unsigned long a5;

    long long a6;
    unsigned long long a7;

    float a8;
    double a9;

    unsigned short x, y;
    unsigned long long z;

    std::cin >> x;
    std::cin >> y;
    std::cin >> z;

    unsigned long long ans;
    ans = x * y * z;

    std::cout << ans;

    return 0;
}


