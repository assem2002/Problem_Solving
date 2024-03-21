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
////#include<limits>+++

using namespace std;

struct node{
    node* left=nullptr;
    node* right=nullptr;
    int value=-1;

};

node* arr[1000002];
int main(){
    int n;
    cin>>n;
    node* first {};
    node* firstSecond {};
    queue<node*> q;
    for(int i=0;i<n;i++){
        int left,right;
        cin>>left>>right;
        if(right == 0) right =1000002;
        node* new_one = new node();
        if (arr[left]){
            arr[left]->right = new_one;
            new_one->left = arr[left];
        }
        else{
            node* new_left = new node();
            new_left->value =left;
            new_left->right = new_one;
            new_one->left = new_left;
            arr[left] = new_left;
        }

        if(arr[right]){
            arr[right]->left = new_one;
            new_one->right =arr[right];
        }
        else{
            node* new_right = new node();
            new_right->value = right;
            new_right->left = new_one;
            new_one->right = new_right;
            arr[right] = new_right;
        }
        if (((new_one->left)->value) == 0){
            first = new_one->left;
        }
        if (!((new_one->left)->left) && ((new_one->left)->value != 0)) q.push(new_one->left);

    }
    int stop =-2;
    node* arr[2];
    arr[0] = first;
    while(true){
        if(!q.front()->left){
            firstSecond = q.front();
            break;
        }
        else{
            q.pop();
        }
    }
    arr[1] = firstSecond;
    int active =0;
    while(true){
        if(!stop) break;
        if(!arr[active]){
            stop++;
            active = 1 - active;
        }
//        cout<<"\n HERE :"<<active<< "  " <<arr[active]->value;
        if(arr[active]->value == 0){
            arr[active] = arr[active]->right;
            continue;
        }
        if(arr[active]->value == 1000002)break;
        if(arr[active]->value ==-1){
            arr[active] = arr[active]->right;
            active = 1-active;
        }
        else{
            cout<<arr[active]->value<<" ";
            arr[active] = arr[active]->right;
        }





    }

    return 0;
}

