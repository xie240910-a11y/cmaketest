#include "head.h"
#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3, b = 4;
    int c = add(a, b);
    int d = sub(b, a);
    cout << "c: " << c << ", d: " << d << endl;
    return 0;
}
