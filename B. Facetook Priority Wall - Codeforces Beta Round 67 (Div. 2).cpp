#include <iostream>
#include<bits/stdc++.h>

using namespace std;

unordered_map<string,int> m;
vector<pair<int,string>> v ;
string me,first,second,action,dummy;
int n;

bool func( pair<int,string> f, pair<int,string> s) {
    if(f.first ==  s.first){
        return f.second < s.second;
    }
    else {
        return f.first > s.first;
    }
}
void solve(){
    v.push_back({-1,"dummy"});
    int currentPoints;
    for(int i=0;i<n;i++){
        cin>>first>>action;

            if(action ==  "commented"){
                currentPoints =10;
                cin>>dummy;
            }
            if(action ==  "likes"){
                currentPoints =5;
            }
            if(action ==  "posted"){
                currentPoints = 15;
                cin>>dummy;
            }
        cin>>second>>dummy;
        second = second.substr(0,second.size()-2);
        if(me == first || me ==second){
            string theman = (me ==first)? second :first;
            if(m[theman]){
                v[m[theman]].first+=currentPoints;
            }
            else{
                v.push_back({currentPoints,theman});
                m[theman] = v.size()-1;
            }
        }
        else{
            if(m[first] == 0){
                v.push_back({0,first});
                m[first] = v.size()-1;
            }
            if(m[second] == 0){
                v.push_back({0,second});
                m[second] = v.size()-1;
            }

        }

    }


}


int main(){
    cin>>me>>n;
    solve();
    sort(v.begin(),v.end() ,func);
    for(int i =0;i<v.size()-1;i++){
        cout<<v[i].second<<"\n";
    }
}
