#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N;
  int count = 0;

  for (int i = 0; i < N; i++) {
    cin >> S;
    if (S == "For") {
      count += 1;
    } else {
      count -= 1;
    }
  }

  if (count >= 0) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}
