// https://owlcoder.technicalhub.io/course-program/course-program-compiler-dark/659917a375f08ccfa51337aa/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b;
    cin>>n>>a>>b;
    a=a^b;
    int k=__builtin_popcount(a);
    if(k%2==0){
        cout<<k/2;
    }
    else{
        cout<<-1;
    }
}
