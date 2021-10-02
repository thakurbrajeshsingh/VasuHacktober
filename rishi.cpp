#include <bits/stdc++.h>
#include<iostream>

using namespace std;


int main() {
    // your code goes here
    int t;
    cin>>t;
    while(t--){


        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;

        long long m = (b + xa);
        long long n = (c + ya);

        long long ans1 = p/m;
        long long ans2 = p/n;

        cout<< max(ans1, ans2) <<endl;


    }
    return 0;
}
