//https://www.acmicpc.net/problem/2908
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char num1[101];
    char num2[101];
    char tempNum1[101];
    char tempNum2[101];
    int len1 =0, len2 =0;
    cin>> num1>>num2;
    len1 = strlen(num1);
    len2 = strlen(num2);

    //순서바꾸기
    for(int i=0;i<len1;i++){
        tempNum1[i]=num1[len1-i-1];
    }
    for(int j=0;j<len2;j++){
        tempNum2[j]=num2[len2-j-1];
    }
    int a=0, b=0;
    a=atoi(tempNum1);
    b=atoi(tempNum2);
    if(a>b){
        cout<<a;
    }else{
        cout<<b;
    }
    
    return 0;
}