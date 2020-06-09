#include <iostream>
#include <vector>
using namespace std;

string kb[3][3] = {{"-", "ABC", "DEF"}, {"GHI", "JKL", "MNO"}, {"PQRS", "TUV", "WXYZ"}};
vector<char> ans;

void typing(int x, int y, int count)
{
    if(x == 0 && y == 0)
    {
        while(!ans.empty() && count>=0)
        {
            ans.pop_back();
            count--;
        }
    }
    else
    {
        int div = 3;
        if (x == 2 && y != 1) //num 7 or 9
            div = 4;
        ans.push_back(kb[x][y][(count-1)%div]);
    }
}

int main()
{
    int n, starter, tmp, c_x, c_y, dx, dy;
    cin >> n >> starter >> tmp;
    //stupid switch/case
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            if((i*3)+j+1 == starter)
            {
                c_x = i;
                c_y = j;
            }
    typing(c_x, c_y, tmp);
    for(int i=0;i<n-1;i++)
    {
        cin >> dy >> dx >> tmp;
        c_x += dx;
        c_y += dy;
        typing(c_x, c_y, tmp);
    }
    if(!ans.empty())
        for(int i=0;i<ans.size();i++)
            cout << ans[i];
    else
        cout << "null";
    cout << endl;
    return 0;
}