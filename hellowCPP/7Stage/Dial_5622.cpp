//https://www.acmicpc.net/problem/5622
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //1~9까지는 숫자 + 1초 걸림
    //각 숫자에 해당하는 영문자 체크

    char dial[17];
    cin>>dial;
    int len = strlen(dial);
    int time=0;
    for(int i=0; i<len; i++){
        
        if(dial[i] =='A' || dial[i] =='B' || dial[i] =='C'){
            time += 3;
        }else if(dial[i] =='D' || dial[i] =='E' || dial[i] =='F'){
            time += 4;
        }else if(dial[i] =='G' || dial[i] =='H' || dial[i] =='I'){
            time += 5;
        }else if(dial[i] =='J' || dial[i] =='K' || dial[i] =='L'){
            time += 6;
        }else if(dial[i] =='M' || dial[i] =='N' || dial[i] =='O'){
            time += 7;
        }else if(dial[i] =='P' || dial[i] =='Q' || dial[i] =='R' || dial[i] =='S'){
            time += 8;
        }else if(dial[i] =='T' || dial[i] =='U' || dial[i] =='V'){
            time += 9;
        }else if(dial[i] =='W' || dial[i] =='X' || dial[i] =='Y'  || dial[i] =='Z'){
            time += 10;
        }
    }
    
    cout<<time;

    return 0;

}