#include <bits/stdc++.h>
using namespace std;

int main()
{
        int a,b;
        cin >> a >> b;
		    if(a>b)swap(a,b);
        string arr[] = {"","one","two","three","four","five","six","seven","eight","nine"};
        for(int i=a; i<=b; ++i)
        {
            if(i<=9) fo << arr[i] << '\n';
            else
            {
                fo << (i&1?"odd":"even") << '\n';
            }
        }
       return 0;
}
