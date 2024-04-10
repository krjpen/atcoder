#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, d;
  cin >> n >> d;
  int t[999];
  
  for(int i = 0; i < n; i++){
    cin >> t[i];
  }

  for(int i = 0; i < n-1; i++){
    if(t[i+1] - t[i] <= d){
      cout << t[i+1];
      return 0;
    }
  }
  cout << -1;
}
