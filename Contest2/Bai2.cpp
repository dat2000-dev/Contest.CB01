#include <bits/stdc++.h>
using namespace std;

int main()
{
		int n ; cin >> n;
		int64_t  res= 0;
		for(int i=0;i<n;++i){
			for(int j=0;j<n;++j){
				int x;
        cin >> x;
				if(i==j) res+=x;
			}
		}
		cout << res;
	return 0;
}

