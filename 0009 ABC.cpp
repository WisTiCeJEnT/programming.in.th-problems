#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> Q;
    int a,b,c;
    for(int i=0;i<3;i++)
    {
        cin >> a;
        Q.push(a);
    }
    c = Q.top();
    Q.pop();
    b = Q.top();
    Q.pop();
    a = Q.top();

    string S;
    cin >> S;
    for(int i =0;i<3;i++)
    {
        switch(S[i])
        {
        case'A':
            cout << a << " ";
            break;
        case'B':
            cout << b << " ";
            break;
        case'C':
            cout << c << " ";
            break;
        }
    }
    return 0;
}
