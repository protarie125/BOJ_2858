#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

int r, b;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> r >> b;

  for (auto w = 1; w <= r; ++w) {
    for (auto l = w; l <= r; ++l) {
      const auto area = l * w;
      const auto exr = w + w + l + l - 4;
      const auto exb = area - exr;

      if (r == exr && b == exb) {
        cout << l << ' ' << w;
        return 0;
      }
    }
  }

  return 0;
}