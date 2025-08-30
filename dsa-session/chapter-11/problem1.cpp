#include <algorithm>
using namespace std;

void maxProfit(int *arr, int n) {
  int bestBuy[100000];
  // bestBuy[0] = INT_MAX;

  for (int i = 1; i < n; i++) {
    bestBuy[i] = min(bestBuy[i - 1], arr[i - 1]);
  }
  int maxProfit = 0;

  for (int i = 0; i < n; i++) {
    int currentProfit = arr[i] - bestBuy[i];
    maxProfit = max(maxProfit, currentProfit);
  }
  // cout << "max profilt " << maxProfit << endl;
}
int main() {

  int prices[6] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(prices) / sizeof(int);

  maxProfit(prices, n);
  return 0;
}
