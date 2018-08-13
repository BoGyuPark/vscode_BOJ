//https://www.acmicpc.net/problem/1065
#include <iostream>
using namespace std;
int main()
{
    int N;
    int f=0, s=0, t=0, count = 0;
    cin>>N;

    if(N<100)
    {
        cout<<N<<'\n';
    }
    else 
    {
        for(int i=100; i<=N; i++){
            // _ _ _ f, s, t
            f = (i%1000)/100;
            s = (i%100)/10;
            t = i%10;

            if(f-s == s-t)
            {
                count++;
                //cout<<f<<s<<t<<'\n';
            }
        }
        if(N==1000){
            count--;
        }
        cout<<count+99<<'\n';
    }

    return 0;
}