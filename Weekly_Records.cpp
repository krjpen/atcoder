#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int A;
  cin >> N;

  for (int i = 0; i < N; i++) {
    int count = 0;
    for (int i = 0; i < 7; i++) {
      cin >> A;
      count += A;
    }
    cout << count << endl;
  }
}
