// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/654b6120f87ca5a69d5a679c/

#include<bits/stdc++.h>
using namespace std;
void nk(){
    int a,b;
    cin>>a>>b;
    if(b>a)swap(a,b);
    if(a>2*b or (a+b)%3==1)cout<<"NO\n";
    else cout<<"YES\n";
}
int main(){
    int t;
    cin>>t;
    while(t--){
        nk();
    }
}
