//https://www.acmicpc.net/problem/2920
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    string asc = "1 2 3 4 5 6 7 8";
    string des = "8 7 6 5 4 3 2 1";

    if(str.compare(asc)==0){
        cout<<"ascending";
    }else if(str.compare(des)==0){
        cout<<"descending";
    }else{
        cout<<"mixed";
    }
    return 0;
}