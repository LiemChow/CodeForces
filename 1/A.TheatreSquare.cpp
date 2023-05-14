#include <iostream>

using namespace std;

int main(){
    long long m{}, n{}, a{};
    cin >> m >> n >> a;

    m = ((m % a == 0) ? (m / a) : ((m / a + 1)));
    n = ((n % a == 0) ? (n / a) : ((n / a + 1)));
    cout << m * n;

    return 0;

}