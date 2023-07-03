#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int A;
  cin >> N;
  vector<int> vec(N);

  for (int i = 0; i < N; i++) {
    cin >> A;
    vec.at(i) = A;
  }

  for (int i = 0; i < N; i++) {
    if (vec.at(i) % 2 == 0) {
      cout << vec.at(i) << endl;
    }
  }
}
