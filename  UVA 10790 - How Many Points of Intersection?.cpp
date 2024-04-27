#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int cnt=1;
    long long a,b;
    while(true){
        cin>>a>>b;
        if((a&&b) == 0) break;
        cout<<"Case "<<cnt++<<": "<<((a*(a-1))/2)* ((b*(b-1))/2)<<"\n";
    }


}

