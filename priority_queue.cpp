#include<bits/stdc++.h>
using namespace std;
int main(){
//priority_queue<int>pq; //max heap
	priority_queue<int,vector<int>,greater<int>>pq; // min heap
pq.push(1);//1
pq.push(2);//2 1

pq.push(3);//3 1 2
pq.push(4); // 4 1 2
pq.push(5); // 5 4 1 2

cout<<pq.size()<<endl;
while(!pq.empty()){
	int a = pq.top();
	cout<<a<<" ";
	pq.pop();
}





	return 0;
}