// https://www.codechef.com/COOK126C/problems/PTUPLES


#include <bits/stdc++.h>
using namespace std;
int maxi=1e6;
vector<int> sieve(maxi+1,1);
vector<int> primes;
void generate(){
    sieve[0]=sieve[1]=0;
    for(int i=2;i*i<=maxi;i++){
        if(sieve[i]==1){
            primes.push_back(i);
            for(int j=i*i;j<=maxi;j+=i){
                sieve[j]=0;
            }
        }
    }
}
void nk(){
    int n;
    cin>>n;
    int num=lower_bound(primes.begin(),primes.end(),n)-primes.begin();
    int ans=0;
    for(int i=1;i<=num and i+2<=num;i++){
        if(find(primes.begin(),primes.end(),primes[i]+2)!=primes.end()){
            ans++;
        }
    }
    cout<<ans<<endl;
}
int main() {
    generate();
	int t;
	cin>>t;
	while(t--){
	    nk();
	}
}
