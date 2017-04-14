#include <iostream>
//#include <math.h>
//#include <stdlib.h>
//#include <iomanip>
#include <queue>
//#include <utility>

using namespace std;

int main()
{
    priority_queue<int> pq;
    for(int i=0;i<4;i++)
    {
        int t;
        cin >> t;
        pq.push(t);
    }
    int A[4];
    for(int i=0;i<4;i++)
    {
        A[i] = pq.top();
        pq.pop();
    }
    cout << min(A[0],A[1])*min(A[2],A[3]);
    return 0;
}
