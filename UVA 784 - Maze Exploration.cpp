//    std::ios_base::sync_with_stdio(false);   // (removes the interoperability that happens between C's stdio.h and iostream )
//    std::setvbuf(stdout, nullptr, _IOFBF, BUFSIZ);   //(will neglect the c's stdio.h property of doing inline flushing with every line of code)
#include<numeric>
#include<vector>
#include<cmath>
#include<stack>
#include <iomanip>
#include <vector>
//#include<bits/stdc++.h>
#include <bitset>
//#include<iomanip>
#include <algorithm>
#include<queue>
//#include<deque>
//#include<numeric>
#include<set>
//#include<unordered_set>
#include<map>
//#include<fstream>
//#include<sstream>
//#include <thread>
//#include <chrono>
#include<cstring>
#include<string>
#include <unordered_map>
#include<memory>
#include <iostream>
#include <thread>


#include <iostream>
std::pair<int,int>startPoint;
std::string seperation;
std::queue<std::pair<int,int>> myQueue ;
char grid[30][80];
int moveX[4] = {1,-1,0,0};
int moveY[4]  = {0,0,1,-1};
int iter=4;
void BFS(){
    myQueue.push(startPoint);
    while(!myQueue.empty()){
        std::pair<int,int> current =myQueue.front();
        myQueue.pop();
        if(grid[current.first][current.second] == ' ' ||grid[current.first][current.second] =='*' ){
            grid[current.first][current.second] = '#';
            iter =4;
            while(iter--) myQueue.push(std::make_pair(current.first+moveX[iter],current.second +moveY[iter]));
        }
    }
}
int main(){
    int n;
    std::cin>>n;
    std::cin.ignore(1,'\n');
    while(n--){
        for (int row = 0 ; row<30;row++)
            for (int column = 0 ; column <80 ; column++)
                grid[row][column] = '_';
        int row = 0;
        while(true){
            std::string temp;
            std::getline(std::cin,temp);
            if (temp[0] == '_'){
                seperation = temp;
                break;
            }

            for(int column = 0 ; column<temp.size() ;column++){
                grid[row][column] = temp[column];
                if (temp[column] == '*') startPoint = std::make_pair(row,column);
            }
            row++;
        }
        BFS();
        for (int roww = 0 ; roww<row;roww++){
            for (int column = 0 ; column <80 ; column++){
                if (grid[roww][column] == '_')continue;
                std::cout<<grid[roww][column];
            }
            std::cout<<'\n';
        }
        std::cout<<seperation<<std::endl;
    }

}













