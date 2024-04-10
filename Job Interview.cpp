#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string s;
  cin >> n >> s;
  int count = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'o') {
      count++;
    }
    if (s[i] == 'x') {
      cout << "No";
      return 0;
    }
  }
  if(count >= 1){
    cout << "Yes";
  }
  else{
    cout << "No";
  }
}
