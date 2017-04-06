#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    int t,all = 0,c = 0;
    vector<int> A(42,0);
    for(int i=0;i<10;i++)
    {
        cin >> t;
        A[t%42] = 1;
    }
    for(int i=0;i<42;i++)
    {
        if(A[i]==1)
            c++;
    }
    cout << c;
    return 0;
}
