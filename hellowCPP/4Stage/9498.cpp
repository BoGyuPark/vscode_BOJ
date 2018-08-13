//https://www.acmicpc.net/problem/9498
#include <iostream>
using namespace std;
main()
{
    int score;
    cin>>score;
    if(score>=90){
        cout<<"A"<<'\n';
    }else if(score>=80){
        cout<<"B"<<'\n';
    }else if(score>=70){
        cout<<"C"<<'\n';
    }else if(score>=60){
        cout<<"D"<<'\n';
    }else{
        cout<<"F"<<'\n';
    }
}