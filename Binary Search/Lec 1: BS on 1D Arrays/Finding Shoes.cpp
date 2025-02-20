#include <bits/stdc++.h>
using namespace std;

void f(){
    int n,m;
    cin>>n>>m;
    
    if(m>=n){
        cout<<n<<endl;
    }
    else{
        cout<<2*n-m<<endl;
    }
    
    
    
}

int main() {
	// your code goes here
    int T;
    cin>>T;
    while(T--) f();
}
