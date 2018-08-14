//https://www.acmicpc.net/problem/8958
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    cin.ignore();
    string str;
    int len, num, cnt;
    for(int i=0; i<N; i++){
        getline(cin, str);
        len = str.size();
        num = 0;
        cnt = 1;
        for(int j=0; j<len; j++){
            if(str[j]=='O'){
                num+=cnt;
                cnt++;
            }else{
                cnt=1;
            }
        }
        cout<<num<<'\n';
    }
    return 0;
}