#include <iostream>
#include<bits/stdc++.h>

using namespace std;

struct l_and_mincost{
    vector<pair<int,int>> l;
    vector<int> l_pure;
    vector<int> cost;
};
struct dataa{
    int r,dur,c;
    dataa(int r,int dur,int c) :r(r),dur(dur),c(c){}
    bool operator < ( const dataa &f){
        if(this->r<=f.r) return false;
        return true;
    }
};

vector<dataa> r;
vector<l_and_mincost> complement;
int n,x;


int main(){
    int ll,rr,c;
    cin>>n>>x;
    complement.reserve(200005);
    for(int i=0;i<n;i++){
        cin>>ll>>rr>>c;
        int dur = rr - ll + 1;
        r.push_back({rr,dur,c});
        complement[dur].l.push_back({ll,c});
    }

    sort(r.begin(),r.end());
    for(int i=0;i<200005;i++){
        int siz = complement[i].l.size();
        complement[i].cost.assign(siz,0);
        sort(complement[i].l.begin(),complement[i].l.end());
        for(int m = 0;m<siz;m++)
            complement[i].l_pure.push_back(complement[i].l[m].first);
        int mini = 2000000008;
        for(int j=siz-1;j>=0;j--){
            mini = min(mini,complement[i].l[j].second);
            complement[i].cost[j] = mini;
        }
    }
    int res =2000000008;
    int total=0;
    for(int i=0;i<n;i++){
        total = r[i].c;
        if ((x - r[i].dur) <0) continue;
        auto &s = complement[x - r[i].dur];
        auto p = upper_bound(s.l_pure.begin(),s.l_pure.end(),r[i].r);
        if(p == s.l_pure.end()) continue;
        total  = total + s.cost[p - s.l_pure.begin()];
        res = min(res,total);
    }

    if(res ==2000000008) cout<<-1;
    else cout<<res;

}

