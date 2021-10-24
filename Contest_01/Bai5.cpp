#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    cin >> n;
    if(n<0) n = -n;
    for( i = n; i>= -n; --i){
      if(i!=0 && n%i==0 ) 
        cout << i << ' ';
    }
}
