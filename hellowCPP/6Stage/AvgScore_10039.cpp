//https://www.acmicpc.net/problem/10039
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, sum =0;
    for(int i=0; i<5; i++){
        cin>>N;
        if(N<40){
            sum+=40;
        }else{
            sum+=N;
        }
    }    
    cout<<sum/5;
    return 0;
}