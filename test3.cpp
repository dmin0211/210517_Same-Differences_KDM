#include <iostream>
using namespace std;

int main() {
  int temp;
  cin >> temp;
  for (int i = 0; i < temp; ++i) {
    int n;
    cin >> n;
    if (n == 1)
      cout << 1 << endl;
    else if (n == 2)
      cout << -1 << endl;
    else {
      int ans[n][n];
      int tmp = 1;
      for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
          if ((j + k) % 2 != 0) continue;
          ans[j][k] = tmp++;
        }
      }
      for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
          if ((j + k) % 2 == 0) continue;
          ans[j][k] = tmp++;
        }
      }
      for (int j = 0; j < n; ++j) {
        for (int k = 0; k < n; ++k) {
          cout << ans[j][k]<<" ";
        }
        cout << endl;
      }
    }
  }
}