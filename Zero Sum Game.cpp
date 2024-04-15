#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  int a;
  int k = 0;
  cin >> n;
  for(int i = 0; i < n-1; i++){
    cin >> a;
    k += a;
  }

  if(k>0||k<0){
    cout << -k;
  }
  else{
   cout << 0; 
  }
  
}
