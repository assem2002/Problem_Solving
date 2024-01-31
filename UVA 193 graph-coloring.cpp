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

vector<int> restricted;
deque<int> resNodes;
deque<int> maxresNodes;
int n,k;
int resCnt;
int maxrescnt;
int maxpossible;

void backtrack(vector<vector<int>> &c,int ind){
    if(ind>n){
        if (((int)resNodes.size() > maxrescnt)){

        maxresNodes.clear();
        for(int i =0;i<(int)resNodes.size();++i)
            maxresNodes.push_back(resNodes[i]);
        maxrescnt=(int)resNodes.size();
        }
        return;
    }
    if(maxrescnt==maxpossible)
        return;
    else if (restricted[ind]){
        return backtrack(c,ind+1);
    }

    else{
        resNodes.push_back(ind);
        for(int i =0;i<(int)c[ind].size();++i){
            restricted[c[ind][i]]++;
        }
        resCnt++;
        backtrack(c,ind+1);
        for(int i =0;i<(int)c[ind].size();++i){
            restricted[c[ind][i]]--;
        }
        resNodes.pop_back();
        resCnt--;
        return backtrack(c,ind+1);
    }
}

void solve (){
    cin>>n>>k;
    vector<vector<int>> con(n+10);
    while(k--){
        int x,y;
        cin>>x>>y;
        con[x].push_back(y);
        con[y].push_back(x);
    }
    resCnt =0;
    maxrescnt=0;
    maxpossible = (n/2)+(n%2);
    resNodes.clear();
    restricted.assign(120,0);
    backtrack(con,1);
    cout<<maxrescnt<<endl;
    for(int i =0;i<(int)maxresNodes.size();++i){
        if(i!=0)std::cout<<" ";
        cout<<maxresNodes[i];
    }
    cout<<endl;
    return;
}


int main(){

    int m;
    cin>>m;
    while(m--){
        solve();
    }
    return 0;




}














