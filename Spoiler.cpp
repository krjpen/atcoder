#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  int a, b;
  int counter = 0;

  for (int i = 0; i < s.size(); i++) {
    if (counter == 2) {
      break;
    }
    if (s[i] == '|') {
      if(counter == 0) a = i;
      else if(counter == 1) b = i;
      else break;
      counter++;
    }
  }

  s.erase(a,b-a+1);

  cout << s;
}
