#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
std::vector<std::vector<char>> grid;
std::vector<std::vector<int>> visit;
int n;
int n_dash;
int fill_grid_with_possibilities(int row, int col){    
    if(row >= n || col >= n || grid[row][col] == '*'){
        return 0;
    }
    int &ind = visit[row][col];
    if(ind != -1){
        return ind%mod;
    }
    return ind = (fill_grid_with_possibilities(row+1, col) + fill_grid_with_possibilities(row, col+1))%mod;

}

int main(){
    std::cin>>n;
    n_dash = n - 1;
    grid.resize(n,std::vector<char>(n,'.'));
    visit.resize(n,std::vector<int>(n,-1));
    visit[n_dash][n_dash] = 1;
    std::string inp_s;
    for(int i = 0; i<n; i++){
        std::cin>>inp_s;
        for(int j = 0 ; j < n; j++){
            if(inp_s[j] == '*'){
                grid[i][j] = '*';
            }
        }
    }    
    std::cout<< fill_grid_with_possibilities(0,0)<<std::endl;
    return 0;

}
