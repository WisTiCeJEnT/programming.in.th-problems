#include <iostream>
//#include <algorithm>

using namespace std;

int main()
{
    int mx = -1;
    int winner = -1;
    for(int i=0;i<5;i++)
    {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        //mx = max(mx,a+b+c+d);
        if (a+b+c+d > mx)
        {
            winner = i+1;
            mx = a+b+c+d;
        }
    }
    cout << winner << " " << mx << endl;
    return 0;
}
