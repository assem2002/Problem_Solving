#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int arr[400000];
unordered_map<int,vector<int>> collisions;
vector<pair<int,int>> info;
bool fitsInCircle(int x,int y,int center,int r){
    return  (pow((x-center),2) + pow (y,2)) <= pow(r,2);

}



int main(){
    info.push_back({-200020,-200020});//dummy
    int n;
    cin>>n;
    int x,r;
    for (int i=1;i<=n;i++){
        cin>>x>>r;
        int v;
        for(int right=x;right <= (x+r) ;right++){
            v = arr[right+200000];
            if (v!= 0){
                collisions[right+200000].push_back(v);
            }
            arr[right+200000] = i;
        }
        for(int left=x;left >= (x-r) ;left--){
            v = arr[left+200000];
            if (v!= 0){
                collisions[left+200000].push_back(v);
            }
            arr[left+200000] = i;
        }
        info.push_back({x,r});
    }
//    for(int i=200000;i<200020;i++){
//        cout<<arr[i]<<" ";
//    }
//    cout<<"\n";
    int m;
    cin>>m;
    vector<int> result(n,-1);
    int y;
    bool res;
    int total=0;
    for(int j=0;j<m;j++){
        cin>>x>>y;
        int circle =arr[x+200000];
        pair<int,int> ret = info[circle];
        res = fitsInCircle(x,y,ret.first,ret.second);
//        cout<<"res is : "<<res<<" "<<"circle is :"<<circle<<"cord is :"<<ret.first<<" "<<ret.second<<"\n";

        if(result[circle-1] == -1 && res) {
                result[circle-1] = j+1;
                total++;
        }
        if(collisions[x+200000].size()!=0){
            for(int noOfCircles : collisions[x+200000]){
                ret = info[noOfCircles];
                res = fitsInCircle(x,y,ret.first,ret.second);
                if(result[noOfCircles-1] == -1 && res) {
                    result[noOfCircles-1] = j+1;
                    total++;
                }
            }
        }
    }
    cout<<total<<"\n";
    for(int f : result){
        cout<<f<<" ";
    }

}


