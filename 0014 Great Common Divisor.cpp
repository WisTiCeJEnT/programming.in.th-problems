#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    if(max(a,b)==b)
        swap(a,b);
    int c;
    while(a%b!=0)
    {
        c = a%b;
        a = b;
        b = c;
    }
    cout << b;
    return 0;
}
