#include <iostream>
#include "calc.h"
using namespace std;

int main(int argc, char const *argv[])
{
    /* code */
    int a = 1, b = 2;
    int c = add(a, b);
    int d = sub(a, b);
    cout << "c = " << c << ", d = " << d << endl;
    return 0;
}
