using ll=long long;
vector<int> findMissingRepeatingNumbers(vector < int > a) {
    // Write your code here
    ll n=a.size();
    //S-SN
    //S2-S2N
    ll SN=(n*(n+1))/2;
    ll S2N=(n*(n+1)*(2*n+1))/6;
    ll S=0,S2=0;
    for(int i=0;i<n;i++){
        S+=a[i];
        S2+=(ll)a[i]*(ll)a[i];
    }
    ll val1=S-SN; //x-y
    ll val2=S2-S2N;
    val2=val2/val1; //x+y
    int x=(val1+val2)/2;
    int y= x-val1;
    return {(int)x,(int)y};
}
