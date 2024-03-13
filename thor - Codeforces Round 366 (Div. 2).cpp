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
int unread=0;
class node_child{
public:
    bool read=false;
    node_child* next =nullptr;

    node_child() {}

    node_child* kill_all(){
        if(this->read ==false) unread--;
        this->read=true;
        if (!next)
            return nullptr;
        else
            return next->kill_all();
    }


};
class node_parent{
public:
    node_child* last_killed=nullptr;
    node_child* last_created=nullptr;
    node_child* first_created=nullptr;

    node_parent(){}
    void add(){
        if(!last_created){
            last_created = new node_child();
            first_created = last_created;

        }
        else {
            node_child* temp = new node_child();
            last_created->next = temp;
            last_created =  temp;
        }

        if(!last_killed){
            last_killed =last_created;
        }
    }
    void kill_all(){
        if(last_killed)
            last_killed = last_killed->kill_all();
    }

};

unordered_map<int ,node_parent*> m;
node_child* arr[300000];
int pointer =0;
int last_time=0;
int main (){
    int n,q;
    cin>>n>>q;
    for(int i=0;i<q;i++){
        int type,application_or_t;
        cin>>type>>application_or_t;
        if (type ==1){
            if (!m[application_or_t]){
                node_parent* tmp = new node_parent();
                m[application_or_t] = tmp;
                tmp->add();

            }
            else{
                m[application_or_t]->add();
            }
            arr[pointer++] =m[application_or_t]->last_created;
            unread++;

        }
        else if (type == 2){
            if (m[application_or_t])m[application_or_t]->kill_all();
        }
        else{
            int j= last_time;
            for(;j<application_or_t ;j++){
                if (!(arr[j]->read)){
                    arr[j]->read =true;
                    unread--;
                }
            }
            last_time = j;
        }
        cout<<unread<<"\n";
    }


}

