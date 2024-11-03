#include<bits/stdc++.h>
using namespace std;
bool is_positive(int x){
	return x>0;
}
int main(){
vector<int>v = {2,4,6,7};
cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;
// we can also use functions
cout<<any_of(v.begin(),v.end(),is_positive)<<endl;









	return 0;
}