
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned int X = 7;
    // 7 = 00000111
    //unsigned char X = 98; 
    // 98 = 01100010
    //unsigned char X = 241; 
    // 241 = 11110001

    int num;
    cin >> num;
    int i;
    cin >> i;
    unsigned int k = pow(2, i - 1);//имитация сдвига
    bool res = k & X;
    unsigned int invert = X ^ 255; // побитовое исключающее или

    cout << res << "\n" << invert;
}


