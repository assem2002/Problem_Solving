#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> lines;
int move_x[4] {0,0,1,-1};
int move_y[4] {-1,1,0,0};
int n;
int r1,c1,r2,c2;
vector<vector<bool>> forbidden(100,vector<bool>(100000,false));

pair<bool,pair<int,int>> make_move(pair<int,int> &current,int i){
    pair<int,int> current_test = {current.first+move_x[i],current.second+move_y[i]};
    if(current_test.first<0 || current_test.first > n  || (current_test.second)< 0 ||
        forbidden[current_test.first][current_test.second])
        return{false,{-1,-1}};
    else if (lines[current_test.first]<(current_test.second)){
        if (forbidden[current_test.first][lines[current_test.first]]) return{false,{-1,-1}};
        return {true,{current_test.first,lines[current_test.first]}};
    }
    return{true,current_test};

}

int BFS(){
    pair<int,int> desired = {r2,c2};
    queue<pair<int,pair<int,int>>>q;
    q.push({0,{r1,c1}});
    forbidden[r1][c1] =true;
    while(!q.empty()){
        pair<int,pair<int,int>> &current = q.front();
        if (current.second == desired) return current.first;
        for(int i=0;i<4;i++){
            pair<bool,pair<int,int>> res = make_move(current.second,i);
            if(res.first){
                q.push({current.first+1,res.second});
                forbidden[res.second.first][res.second.second] =true;
            }
        }
        q.pop();
    }


}

int main(){
    freopen("input.txt","rt",stdin);
    freopen("output.txt","wt",stdout);
    cin>>n;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        lines.push_back(temp);
    }
    cin>>r1>>c1>>r2>>c2;
    --r1;--c1;--r2;--c2;--n;
    cout<<BFS();



}

