#include <bits/stdc++.h>
using namespace std;
int T, N;
string S;
int main() {
    cin >> T;
    while (T--)
    {
        cin >> N;
        cin >> S;
        for(int i = 0; i < S.length(); i = i + 2)
        {
            if( (S[i] == '0') && (S[i+1] == '0') )
                cout << 'A';
            else if( (S[i] == '0') && (S[i+1] == '1') )
                cout << 'T';
            else if( (S[i] == '1') && (S[i+1] == '0') )
                cout << 'C';
            else
                cout << 'G';
        }
        cout << endl;
    }
    return 0;
}