#include <bits/stdc++.h>
using namespace std;

void f(){
    int x,y;
    cin>>x>>y;
    int req=2*y;
    int s=x/req;
    if(s<0){
         cout<<0<<endl;
    }
    else{
        cout<<s<<endl;
    }
}

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--) f();

}
