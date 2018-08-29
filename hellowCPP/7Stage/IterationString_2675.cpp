//https://www.acmicpc.net/problem/2675
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin>>T;
    cin.ignore();

    int R;
    char S[21];
    int len;
    for(int i=0; i<T; i++)
    {
        cin>>R>>S;
        len=strlen(S);
        for(int j=0; j<len; j++){
            for(int z=0; z<R; z++)
            {
                cout<<S[j];
            }
        }
        cout<<'\n';
    }   

    return 0;
}