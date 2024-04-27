//I brutly kinda of brute forced the solution in here.
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

string n;
int siz;
unordered_map<int,int> forbidden;
vector<vector<int>> find_me(3);
int total=0;
bool solve(){
    siz =n.size()-3;
    for(int i=siz-1;i>=0;i--){
        int res = n[i] - 48;
        res%=3;
        total+=res;
        if(((res == 1) && find_me[1].size()<2 )|| ((res==2) && find_me[2].size()<2)){
            find_me[res].push_back(i);
        }
    }
    total%=3;
    if(total == 2){
        if (find_me[2].size()>0 && siz>1 && !(find_me[2][0] == 0 && n[find_me[2][0]+1] =='0') ){
            forbidden[find_me[2][0]] = -1;
            return true;
        }
        else if(find_me[1].size() >1 && siz >2){
            forbidden[find_me[1][0]] = -1;
            forbidden[find_me[1][1]] = -1;
            return true;
        }
        else if(find_me[2].size()>0 && siz>1){
            forbidden[find_me[2][0]] = -1;return true;
        }

    }
    else if(total == 1){
        if( find_me[1].size()>0 && find_me[1][0] == 0 && n[find_me[1][0]+1] == '0' && n[find_me[1][0]+2] == '0' && find_me[2].size()>1 && siz >2){
            forbidden[find_me[2][0]] = -1;
            forbidden[find_me[2][1]] = -1;
            return true;
        }
        else if (find_me[1].size()>0 && siz> 1){
            forbidden[find_me[1][0]] = -1;
            return true;
        }
        else if (find_me[2].size()>1 && siz> 2){
            forbidden[find_me[2][0]] = -1;
            forbidden[find_me[2][1]] = -1;
            return true;
        }
    }
    else if(total ==0){
        return true;

    }
    return false;
}

int main(){
    cin>>n;
    n =n  + "444";
    if(solve() == false){
        cout<<-1;
        return 0;
    }
    bool flag=false;
    for(int i=0;i<siz;i++){
        if(forbidden[i] == -1)continue;
        else {
            if(!flag && n[i]== '0' && i!=siz-1) continue;
            flag=true;
            cout<<n[i];
        }
    }
    if(!flag)
        cout<<0;



}

