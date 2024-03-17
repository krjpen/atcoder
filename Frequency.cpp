#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;
  vector<int> v;
  vector<int> counter;
  vector<int> z;

  for (int i = 0; i < s.length(); i++) {
    v.push_back(s[i]);
    // cout << v[i] << endl;
  }

  for (int i = 0; i < v.size(); i++) {
    int k = count(v.begin(), v.end(), v[i]);
    counter.push_back(k);
  }

  int t = *max_element(counter.begin(), counter.end());

  // cout << endl << endl << t << endl << endl;
  for (int i = 0; i < counter.size(); i++) {
    // cout << endl << i << " :  "<< counter[i] << endl << endl;
    if (counter[i] >= t){
      z.push_back(v.at(i));
    }
  }
  
  // cout << z.size() << endl;
  // for(int i = 0; i < z.size(); i++){
  //   cout << z[i] << endl;
  // }

  int w = *min_element(z.begin(), z.end());
  char c = (char)w;
  cout << c << endl;
}
