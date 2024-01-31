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
////#include<limits>

using namespace std;
vector<int> operands;
vector<bool> arr;

bool allfilled(){
    for(int i =0;i<5;++i){
        if(!arr[i]) return false;
    }
    return true;
}

bool foundFlag=0;
void solve(long long passed,bool first){
    if(passed == 23 && allfilled()) foundFlag=1;
    if(foundFlag) return ;
    
    for(int i=0;i<5;++i){
        if(arr[i])continue;
        arr[i] =true;
        if(first)
            solve(operands[i],0);
        else{
            solve(passed+operands[i],0);
            solve(passed*operands[i],0);
            solve(passed-operands[i],0);
        }
        arr[i]=false;
    }
    return;


}


int main(){
    int zeros;
    while(true){
        zeros=0;
        foundFlag=0;
        operands.clear();
        arr.assign(5,0);
        for(int i=0;i<5;++i){
            int temp;
            if(!(cin>>temp)) return 0;
            if(!temp) zeros++;
            operands.push_back(temp);
        }
        if(zeros==5)break;
        solve(1,1);
        (foundFlag)?cout<<"Possible\n":cout<<"Impossible\n";
    }
    return 0;


}













