#include <iostream>

using namespace std;

int main()
{
    string in;
    int i=0;
    char a[3];
    a[0] = 1;
    a[1] = 0;
    a[2] = 0;
    cin >> in;
    while(in[i]!='\0')
    {
        if(in[i]=='A')
            swap(a[0],a[1]);
        else if(in[i]=='B')
            swap(a[1],a[2]);
        else
            swap(a[0],a[2]);
        i++;
    }
    for(int i=0;i<3;i++)
    {
        if(a[i]==1)
            cout << i+1;
    }
    return 0;
}
