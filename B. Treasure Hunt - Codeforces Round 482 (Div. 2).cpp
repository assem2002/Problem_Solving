#include <iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    string arr[3];
    cin>>arr[0]>>arr[1]>>arr[2];
    vector<vector<int>> v (3,vector<int>(125,0));
    int siz =arr[0].size();
    for(int i=0;i<3;i++){
            for(int j=0;j<siz;j++){
                v[i][(int)arr[i][j]]++;
            }
            sort(v[i].begin(),v[i].end(),greater<int>());
            int r = siz - v[i][0];
            if(n<=r){
                v[i][0]+=n;
            }
            else if (r==0 && n==1){
                v[i][0]--;
            }
            else{
                v[i][0] = siz ;
            }
    }

    string res = "Draw";
    if(v[0][0] < v[1][0] && v[2][0] <  v[1][0]) res = "Shiro";
    else if (v[0][0] < v[2][0] && v[1][0] < v[2][0]) res = "Katie";
    else if (v[1][0] < v[0][0] && v[2][0] <  v[0][0]) res= "Kuro";
    cout<<res;
    return 0;

}
