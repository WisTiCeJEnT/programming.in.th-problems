#include <iostream>
#include <queue>

using namespace std;

int main()
{
    priority_queue<int> Q;
    int a,b,c;
    //Find A B C
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

    //Get A B C Order
    string S;
    cin >> S;

    //Print Answer
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
