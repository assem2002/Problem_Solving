//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
//std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )

#include <iostream>
//#include<numeric>
//#include<vector>
//#include<cmath>
//#include<stack>
//#include <iomanip>
//#include <vector>
#include<bits/stdc++.h>
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


void factorize(int n){
    priority_queue<pair<int,int>> q;
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            pair<int,int> p {i,0};
            while(n%i==0){
                p.second++;
                n/=i;
            }
            q.push(p);
        }
    }
    if(n>1){
        q.push({n,1});
    }

    while(!q.empty()){
        const pair<int,int> &a = q.top();
        cout<<a.first<<" "<<a.second;
        q.pop();
        if(!q.empty())cout<<" ";
    }
    cout<<"\n";

}


int main(){
    while(true){
        string wholeInput;
        getline(cin, wholeInput);
        if(wholeInput[0] == '0') break;
        istringstream inp (wholeInput);
        int b,e;
        int n=1;
        while(inp>>b && inp>>e){
            n*=pow(b,e);
        }
        factorize(n-1);


    }




}


