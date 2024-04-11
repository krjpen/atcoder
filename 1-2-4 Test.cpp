#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int c = 0;
  vector<int> v;
  v.push_back(a);
  v.push_back(b);

  for (int i = 0; i < 2; i++) {
    if (v[i] == 1) {
      v.push_back(1);
    }
    if (v[i] == 2) {
      v.push_back(2);
    }
    if(v[i] == 4){
      v.push_back(4);
    }
    
    if (v[i] == 3) {
      v.push_back(1);
      v.push_back(2);
    }
    if (v[i] == 5) {
      v.push_back(1);
      v.push_back(4);
    }
    if (v[i] == 6) {
      v.push_back(2);
      v.push_back(4);
    }
    if (v[i] == 7) {
      v.push_back(1);
      v.push_back(2);
      v.push_back(4);
    }
  }

  v.erase(v.begin(), v.begin() + 2);

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  for (int i = 0; i < v.size(); i++) {
    // cout << v[i] << " " << endl;
    c += v[i];
  }

  cout << c;
}
