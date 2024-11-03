#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i = 0;i<n; i++){
    cin>>a[i];
}
sort(a,a+n);
for(int i = 0;i<n; i++){
    cout<<a[i]<<" ";;
}
cout<<endl;
int *ptr = lower_bound(a, a+n,26);//log(n)
int *pt = upper_bound(a, a+n,5);//log(n)
if(ptr == a+n && pt == a+n){
    cout<<"Not found ";
    return 0;
}
if(ptr != a+n)
cout<<*ptr<<endl;
if(pt != a+n)
cout<<*pt<<endl;










    return 0;
}