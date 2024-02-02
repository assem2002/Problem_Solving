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
//
using namespace std;
vector<int> columns;
vector<string> res;
vector<bool> diagonalsLR;
vector<bool> diagonalsRL;
int r,c;
void backtrack(int ind){
    if(ind == r) return backtrack(ind+1);
    if(ind>8){
        string temp;
        for(int j=1;j<=8;++j){
                temp+=to_string(columns[j]);
                if(j<8) temp+=" ";
        }
        res.push_back(temp);
        return;
    }
    for(int col =1;col<=8;++col){
        if(columns[col]||diagonalsLR[col-ind+8]||diagonalsRL[col+ind])continue;
        columns[col]=ind;
        diagonalsLR[col-ind+8]=true;
        diagonalsRL[col+ind]=true;
        backtrack(ind+1);
        columns[col]=0;
        diagonalsLR[col-ind+8]=false;
        diagonalsRL[col+ind]=false;
    }



}

int main(){
    int n;
    cin>>n;
    while(n--){
        cin>>r>>c;
        res.clear();
        columns.assign(9,0);
        diagonalsLR.assign(20,false);
        diagonalsRL.assign(20,false);
        columns[c] =r;
        diagonalsLR[c-r+8] =true;
        diagonalsRL[r+c] =true;
        cout<<"SOLN       COLUMN\n";
        cout<<" #      1 2 3 4 5 6 7 8\n\n";
        backtrack(1);
        sort(res.begin(),res.end(),less<string>());
        for(int i=0;i<res.size();++i){
            if(i<=8)cout<<" ";
            cout<<i+1<<"      "<<res[i]<<'\n';
        }
        if(n) cout<<"\n";
    }

}




















