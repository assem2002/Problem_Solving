#include <iostream>
#include<bits/stdc++.h>

using namespace std;



bool good(int current,int v2,int d,int t){
    int n = (current - v2) / d;
    int r = (current - v2) % d;
    n = abs(n) + (r>=1);
    if (n >= t)
        return false;
    return true;


}

int v1,v2,t,d;
int solve(int current,int current_t){
    int temp = current + d;
    while(!good(temp,v2,d,current_t)){
        temp--;
    }
    return temp;

}

int main(){
    cin>>v1>>v2>>t>>d;
    if (d==0) {
        cout<<v1*t;
        return 0;
    }
    int total=v1;
    int current = v1;
    t--;
    while(t--){
        current = solve(current,t+1);
        total+=current;
    }
    cout<<total;
    return 0;
}

