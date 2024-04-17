//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
//#include<stack>
//#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
//#include <bitset>
////#include<iomanip>
//#include <algorithm>
//#include<queue>
////#include<deque>
////#include<numeric>
//#include<set>
//#include<unordered_set>
//#include<map>
////#include<fstream>
//#include<sstream>
////#include <thread>
////#include <chrono>
//#include<cstring>
//#include<string>
//#include <unordered_map>
////#include <thread>
////#include<limits>+++

using namespace std;

void solve(int number,bool flag){
    while(number%2==0){
    number/=2;
    if(flag) cout<<" x ";
    else cout<<" ";
    cout<<2;
    flag =true;
    }
    int i=3;
    if (number == 2147483647 ) i=number;
    for(; i*i<= number;i+=2){
            while(number%i==0){
                number/=i;
                if(flag) cout<<" x ";
                else cout<<" ";
                cout<<i;
                flag =true;
            }
    }
    if(number>1){
        if (flag) cout<<" x ";
        else cout<<" ";
        cout<<number;
    }


}


int main(){
    int n=0;
    while(true){
        cin>>n;
        if(n==0) break;
        cout<<n<<" =";
        if(n<0) {
            cout<<" -1";
            n = n*-1;
            solve(n,true);
        }
        else
            solve(n,false);
        cout<<"\n";
    }
    return 0;
}


