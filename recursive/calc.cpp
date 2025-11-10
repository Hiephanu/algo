#include <iostream>
using namespace std;

int calc(int n) {
    if (n == 0) return 1;
    return n * calc(n-1); 
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << calc(n);
    /* code */
    return 0;
}
