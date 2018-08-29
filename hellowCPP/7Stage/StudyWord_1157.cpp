//https://www.acmicpc.net/problem/1157
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char Bch[27]= "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Sch[27]= "abcdefghijklmnopqrstuvwxyz";
    char str[1000011];
    int len;
    int cnt[27];
    memset(cnt, 0, 27 * sizeof(int));

    cin>>str;
    len = strlen(str);

    for(int i=0; i<len; i++){
        for(int j=0; j<26; j++){
            if(str[i]==Bch[j] || str[i]==Sch[j]){
                cnt[j]++;
            }
        }
    }
    int max=-1, index=-1;
    for(int z=0; z<26; z++){
        if(max<cnt[z]){
            max=cnt[z];
            index=z;
        }
    }
    int overlap=0;
    for(int x=0; x<26; x++){
        if(max==cnt[x]){
            overlap++;
        }
    }

    if(overlap>1){
        cout<<"?";
    }else{
        cout<<Bch[index];
    }

    return 0;
}