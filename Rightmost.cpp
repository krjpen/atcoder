#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  int i;
  int count = -1;
  cin >> s;
  
  for (i = 0; i < s.size(); i++) {
    if (s.at(i) == 'a') {
      count = i + 1;
    }
  }
  cout << count << endl;
}
