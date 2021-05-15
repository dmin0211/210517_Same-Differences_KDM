#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;

int main() {
  int t = 0;
  cin >> t;
  for (int i = 0; i < t; ++i) {
    int n;
    unsigned long long ans = 0;
    vector<int> inp;
    map<long long, long long> st;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      int temp;
      cin >> temp;
      inp.push_back(temp);
      st[temp - i - 1]++;
    }
    for (auto iter = st.begin(); iter != st.end(); iter++) {
      if ((*iter).second <= 1) continue;
      ans += ((*iter).second * ((*iter).second - 1)) / 2;
    }
    cout << ans << endl;
  }

}