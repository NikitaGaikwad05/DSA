//stl container like vector,list,stack,queue,deque,map,etc;
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void explainpair() 
{
    pair<int,int>p={1,2};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,pair<int,int>>p1={1,{3,4}};
    cout<<p.first<<" "<<p1.second.second<<" "<<p1.second.first<<endl;
    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
    cout<<"end the pair "<<endl;

} 

void exlist()
{
    list<int>ls;
    ls.push_back(30);
    ls.emplace_back(1);
    ls.push_back(40);
    ls.emplace_back(50);
    list<int>::iterator it=ls.begin();
    for(auto it:ls){
        cout<<it<<endl;

    }
    cout<<"end list"<<endl;

}
void expaindeque(){
    deque<int>dq;
    dq.push_back(40);
    dq.emplace_back(2);
    dq.push_back(20);
    dq.push_front(10);
    dq.pop_back();
    dq.pop_front();
    deque<int>::iterator it=dq.begin();

    for(auto it:dq ){
        cout<<it<<endl;

    }

}
void explainStack(){
    stack<int>st;
    st.push(20);
    st.push(10);
    st.emplace(5);
    cout<<st.top()<<endl;
    st.pop();
    st.top();
    st.emplace(40);
    cout<<st.size()<<endl;
    cout<<"end the stack here"<<endl;
    
} 
void explainqueue(){
    queue<int>q;
    q.push(1);
    q.push(3);
    q.emplace(4);
    cout<<q.back()<<endl;
    cout<<q.front();


}
int main()
{
      explainpair();
      exlist();
      expaindeque();
      explainStack();
      explainqueue();

}
