#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <queue>
//#include <utility>

using namespace std;

int main()
{
    int sum[3] = {0,0,0};
    int n;
    char a = 'A';
    string s;
    pair<char,char> b = make_pair('B','A');
    pair<char,char> c = make_pair('C','C');
    
    cin >> n;
    cin >> s;
    for(int i=0;i<n;i++)
    {
        char t = s[i];
        //Add score
        if(t==a)
            sum[0]++;
        if(t==b.first)
            sum[1]++;
        if(t==c.first)
            sum[2]++;
        //Next answer
        //a
        if(a=='A') a = 'B';
        else if(a=='B') a = 'C';
        else a = 'A';
        //b
        if(b.first=='A')b = make_pair('B','C');
        else if(b.first=='B')swap(b.first,b.second);
        else b = make_pair('B','A');
        //c
        if(c == make_pair('A','A')) c = make_pair('A','B');
        else if(c == make_pair('A','B')) c = make_pair('B','B');
        else if(c == make_pair('B','B')) c = make_pair('B','C');
        else if(c == make_pair('B','C')) c = make_pair('C','C');
        else if(c == make_pair('C','C')) c = make_pair('C','A');
        else if(c == make_pair('C','A')) c = make_pair('A','A');
    }
    int mx = max(sum[0],max(sum[1],sum[2]));
    cout << mx << endl;
    if(sum[0]==mx)
        cout << "Adrian" << endl;
    if(sum[1]==mx)
        cout << "Bruno" << endl;
    if(sum[2]==mx)
        cout << "Goran" << endl;
    return 0;
}
