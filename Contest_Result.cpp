#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, A, B;
  cin >> N;
  cin >> M;
  vector<int> vec(N);
  int count = 0;

  for (int i = 0; i < N; i++) {
    cin >> A;
    vec.at(i) = A;
  }

  for (int i = 0; i < M; i++) {
    cin >> B;
    count += vec.at(B-1);
  }
  cout << count;
}
