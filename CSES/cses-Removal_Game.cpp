#include<iostream>
#include<bits/stdc++.h>


inline bool valid_(int x, int n_1_indexed){
    return x >=0 && x < n_1_indexed;
}
int main(){
    std::vector<std::vector<long long>> v(5000, std::vector<long long>(5000,0));
    std::vector<std::vector<bool>> l_or_r(5000, std::vector<bool>(5000,0)); // 0 left - 1 right. (+1 --> 0, -1 --> 1).
    long long l,r;
    // int x,x1,x2,x3;
    // int p2_1,p2_2;
    int n;
    std::cin>>n;
    std::vector<int> xs(n);
    for(int i = 0 ; i< n;i++) std::cin>>xs[i];
    // every state depends on either lower col index or higher row index
    // so you need to procees hige-index rows first, and lower-index cols first to make sure your state dependency is there to be consumed.
    for(int i = n-1 ; i>=0 ; i--){ // start (rows)
        for(int j=0 ; j<n  ; j++){ // end (col)
            if(i>j) {
                continue;
            }
            // Try Right
            r = 0;
            if(valid_(j-1,n) && l_or_r[i][j-1] && valid_(j-2,n)){ // right
                r = v[i][j-2];
            } else if(valid_(j-1,n) && !l_or_r[i][j-1] && valid_(i+1,n)){ // left
                r = v[i+1][j-1];
            }
            r += xs[j];

            // Try Left

            l = 0;
            if(valid_(i+1,n) && l_or_r[i+1][j] && valid_(j-1,n)){ //right
                l = v[i+1][j-1];
            } else if(valid_(i+1,n) && !l_or_r[i+1][j] && valid_(i+2,n)){
                l = v[i+2][j];
            }
            l+=xs[i];

            if(l < r){
                l_or_r[i][j] = true; // right branch
                v[i][j] = r;
            } else {
                v[i][j] = l;
            }

        }
    }
    // for(int i = 0 ;i<n;i++){
    //     for(int j = 0 ; j< n; j++){
    //         std::cout<<v[i][j]<<" ";
    //     }
    //     std::cout<<"\n";
    // }
    std::cout<<v[0][n-1]<<std::endl;
    return 0;
}