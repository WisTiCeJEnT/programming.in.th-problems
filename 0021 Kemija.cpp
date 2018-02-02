#include <iostream>

using namespace std;

int main()
{
    string inp;
    //cin >> inp;
    getline(cin, inp);
    inp = inp + "  ";
    string ans = "";
    for(int i=0;i<inp.length()-2;i++)
    {
        if (inp[i] == 'a' && inp[i+1] == 'p' && inp[i+2] == 'a')
        {
            ans = ans + 'a';
            i += 2;
        }
        else if (inp[i] == 'e' && inp[i+1] == 'p' && inp[i+2] == 'e')
        {
            ans = ans + 'e';
            i += 2;
        }
        else if (inp[i] == 'i' && inp[i+1] == 'p' && inp[i+2] == 'i')
        {
            ans = ans + 'i';
            i += 2;
        }
        else if (inp[i] == 'o' && inp[i+1] == 'p' && inp[i+2] == 'o')
        {
            ans = ans + 'o';
            i += 2;
        }
        else if (inp[i] == 'u' && inp[i+1] == 'p' && inp[i+2] == 'u')
        {
            ans = ans + 'u';
            i += 2;
        }
        else
            ans = ans + inp[i];
    }
    cout << ans << endl;
    return 0;
}
