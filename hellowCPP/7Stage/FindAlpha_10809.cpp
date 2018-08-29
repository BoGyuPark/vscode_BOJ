//https://www.acmicpc.net/problem/10809
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // a b c d e f g h i j k l m n o p q r s t u v w x y z 
    char str[100];
    cin>>str;
    int len = strlen(str);
    char alpha[27]="abcdefghijklmnopqrstuvwxyz";
    int arr[26];
    memset(arr,-1, 26 * sizeof(int));
    for(int i=0; i<len; i++){
        for(int j=0; j<26; j++){
            if(str[i]==alpha[j]){
                if(arr[j]==-1){
                    arr[j]=i;
                    break;                
                }
            }
        }
    }
    
    for(int a=0; a<26; a++){
        cout<<arr[a]<<' ';
    }

    return 0;
}