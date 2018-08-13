//https://www.acmicpc.net/problem/11721
#include<iostream>
using namespace std;
main()
{
    string str;
    cin>>str;
    int len = str.length();
    for(int j=0; j<len; j=j+10){
        cout<<str.substr(j,10)<<endl;
    }
}