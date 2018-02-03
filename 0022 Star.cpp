#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0;i<(n+1)/2;i++)
    {
        for(int j=-((n+1)/2);j<(n+1)/2-1;j++)
        {
            if(j==i-1 || j==-i-1)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
    for(int i=n/2;i>0;i--)
    {
        for(int j=-((n+1)/2);j<(n+1)/2-1;j++)
        {
            if(j==i-2 || j==-i)
                cout << "*";
            else
                cout << "-";
        }
        cout << endl;
    }
    return 0;
}
