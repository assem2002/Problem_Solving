#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int sol=-1;
void s(int r,int c,int total){
    if(c==2) {
            if (r%choices[2] ==0) sol = max(total + (r/choices[2]),sol) ;
            return;
    }
    int cur = (r/choices[c])+1;
    int rem = (r%choices[c]) - choices[c];
    while(true){
        cur--;
        rem= rem + choices[c];
        if(cur < 0) return;
        s(rem,c+1,total+cur);
    }

}

int main(){


    sort(choices,choices+3);
    s(n,0,0);
    cout<<sol;

}
//2683 83 26 2709
