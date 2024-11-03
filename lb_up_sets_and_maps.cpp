#include<bits/stdc++.h>
using namespace std;
int main(){
set<int>s;
map<int,int>m;
int n;
cin>>n;
for(int i = 0;i<n; i++){
    int x;
    int y;
    cin>>x;
    cin>>y;
    s.insert(x);
    m.insert({x,y});
}
auto it = s.lower_bound(5);//s.upper_bound(ele);
auto  bi = m.upper_bound(7);
cout<<*it<<endl;
cout<<bi->first<<" "<<bi->second<<endl;



    return 0;
}