#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N;
  int T = 0;
  int A = 0;
  cin >> S;

  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'T') {
      T += 1;
    } else {
      A += 1;
    }
  }

  if (T > A) {
    cout << 'T';
  } else if (T < A) {
    cout << 'A';
  } else {
    if (S.at(N - 1) == 'T') {
      cout << 'A';
    } else {
      cout << 'T';
    }
  }
}
