//https://www.acmicpc.net/problem/2941
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char word[300];
    cin>>word;
    // c, d, l, n, s, z 뒤에만 체크
    int len = strlen(word);
    int cnt=0;
    for(int i=0; i<len; i++){
        if(word[i]=='c' && (word[i+1]=='=' || word[i+1]=='-')){
            cnt++;
            i++;
        }else if(word[i]=='d'){
            if(word[i+1]=='z'&& word[i+2]=='='){
                cnt++;
                i+=2;
            }else if(word[i+1]=='-'){
                cnt++;
                i++;
            }else{
                cnt++;
            }
        }else if(word[i]=='l' && word[i+1]=='j'){
            cnt++; i++;
        }else if(word[i]=='n' && word[i+1]=='j'){
            cnt++; i++;
        }else if(word[i]=='s' && word[i+1]=='='){
            cnt++; i++;
        }else if(word[i]=='z' && word[i+1]=='='){
            cnt++; i++;
        }else{
            cnt++;
        }
    }

    cout<<cnt;

    return 0;
}