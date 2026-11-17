#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n, a, b;
        cin >> n >> a >> b;

        long long ans;

        if (b <= a) {
            ans = n * a;
        } else {
            long long k = min(n, b - a);

            long long promo = k * (2 * b - k + 1) / 2;
            long long normal = (n - k) * a;

            ans = promo + normal;
        }

        cout << ans << '\n';
    }

    return 0;
}