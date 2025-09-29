#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
#ifdef DEBUG
    cout << "我是xxj" << endl;
#endif 
    for(size_t i = 0; i < 3; ++i)
    {
        cout << "i = " << i << endl;
    }
    return 0;
}
