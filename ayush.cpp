#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;

	while (t--){
	    int n, m, k;
	    cin >> n >> m >> k;
	    int *L = new int [k];
        int *temp = new int [n];
	    for (int i=1; i<=k; i++){
	        cin >> L[i];
	    }

        int d=0;

        for (int i=1; i<=k; i++){
            if (L[i] <= n){
                for (int j = i+1; j <= k; j++){
                    if(L[j]==L[i]){
                        break;
                    }
                }
                temp[d] = L[i];
                d++;
            }
        }

        cout << d << " ";
        int i=0;
        while (i <= d){
            cout << temp[i] << " ";
            i++;
        }
	}
	return 0;
}
