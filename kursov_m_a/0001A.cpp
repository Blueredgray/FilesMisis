#include <iostream>
int main() {
    int n, m, a;
    std::cin >> n >> m >> a;
    int k = a * a;
    int s = n * m;
    int s1=0;
    //n%a>0 ? s1+= n / a +1: s1+=n/a ;
    //m% a > 0 ? s1 += m / a + 1 : s1 += m / a;
    for (int i = 0; i < n;i += a) {
        for (int j = 0; j < m;j += a) {
            if (((m/a>0)||(n / a > 0))&&((i<=n)||(j<=m))) {
                s1 += 1;
            }
        }
    }
    std::cout << s1;
}
