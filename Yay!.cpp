#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    
    if(s.at(i+2) != s.at(i+1) && s.at(i+2) != s.at(i))
    {
      cout << i+3 << endl;
      return 0;
    }
      
    else if(s.at(i+1) != s.at(i) && s.at(i+1) != s.at(i+2))
    {
      cout << i+2 << endl;
      return 0;
    }
      
    else if(s.at(i) != s.at(i+1) && s.at(i) != s.at(i+2))
    {
      cout << i+1 << endl;
      return 0;
    }
  }
}
