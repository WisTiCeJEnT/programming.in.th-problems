#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <queue>
//#include <utility>

using namespace std;

int main()
{
    int n,k,c=0;
    cin >> n >> k;
    int a[n+1];
    for(int i=1;i<n+1;i++)
    {
        a[i] = i;
    }
    for(int i=2;i<n+1;i++)
    {
        if(a[i]==-1)
            continue;
        for(int j=i;j<n+1;j++)
        {
            if(a[j]%i==0)
            {
                k--;
                a[j]=-1;
            }
            if(k==0)
            {
                cout << j;
                i=n+1;
                j=n+1;

            }
        }
    }
    return 0;
}
