#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s = to_string(n);
  
  for(int i = 0; i < s.length()-1; i++){
    if(s[i] <= s[i+1]){
      cout << "No";
      return 0;
    }
  }
  cout << "Yes";
}
