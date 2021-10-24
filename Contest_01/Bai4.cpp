#include <bits/stdc++.h>
using namespace std;

string s;
int cnt;

int main (){
   getline(cin,s);
   for(int i=0;i<s.size()-1;++i){
     if(s[i] !=' ' && s[i+1]==' ')
       cnt++; 
   }
   if(s.back()!=' ')cnt++;
   cout << cnt;
   return 0;
}
