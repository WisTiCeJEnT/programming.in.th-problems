#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
#include <vector>

using namespace std;

int main()
{
    string S;
    cin >> S;
    int c = 0;
    while(S[c]!='\0')
    {
        c++;
    }
    //Start Writing
    //Line1
    cout << ".";
    for(int i=0;i<c;i++)
    {
        if((i+1)%3==0)
            cout << ".*..";
        else
            cout << ".#..";
    }
    cout << endl;
    //Line2
    cout << ".";
    for(int i=0;i<c;i++)
    {
        if((i+1)%3==0)
            cout << "*.*.";
        else
            cout << "#.#.";
    }
    cout << endl;
    //Line3
    cout << "#";
    for(int i=0;i<c;i++)
    {
        cout << "." << S[i] << ".";
        if((i+1)%3==0||((i+2)%3==0&&i!=c-1))
            cout << "*";
        else
            cout << "#";
    }
    cout << endl;
    //Line4
    cout << ".";
    for(int i=0;i<c;i++)
    {
        if((i+1)%3==0)
            cout << "*.*.";
        else
            cout << "#.#.";
    }
    cout << endl;
    //Line5
    cout << ".";
    for(int i=0;i<c;i++)
    {
        if((i+1)%3==0)
            cout << ".*..";
        else
            cout << ".#..";
    }
    cout << endl;
    return 0;
}
