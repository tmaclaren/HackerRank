#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    // Complete this function
    int m;
    
    if (n > 1)
    {
        m = factorial(n-1);
        return (n*m);
    }
    else
    {
        return n;
    }    
}

/* A factorial is a function that multiplies a number by every number below it. For example 5!= 5*4*3*2*1=120. The function is used, among other things, to find the number of way “n” objects can be arranged. */
    
int main() {
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result << endl;
    return 0;
}
