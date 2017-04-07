#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
//#include <vector>

using namespace std;

int main()
{
    pair<int,int> A[9];
    int sum = 0;
    for(int i=0;i<9;i++)
    {
        cin >> A[i].first;
        sum += A[i].first;
        A[i].second = 1;
    }
    for(int i=0;i<8;i++)
    {
        for(int j=i+1;j<9;j++)
        {
            if(sum-A[i].first-A[j].first==100)
            {
                 A[i].second = 0;
                 A[j].second = 0;
                 //cout << A[i].first << A[j].first;
            }
        }
    }
    for(int i=0;i<9;i++)
        if(A[i].second==1)
            cout << A[i].first << endl;
    return 0;
}
