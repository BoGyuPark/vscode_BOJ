//https://www.acmicpc.net/problem/10817
#include <iostream>
#include <algorithm>
using namespace std;
main()
{
    int NumberArray[3]={0,};
    cin>>NumberArray[0]>>NumberArray[1]>>NumberArray[2];
    sort(NumberArray, NumberArray+3);
    cout<<NumberArray[1]<<'\n';

}