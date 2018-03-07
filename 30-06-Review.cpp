#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    int j, sLength;
    string S[10], sEven, sOdd;
    
    // Get number of test cases
    cin >> N;
    
    // For each test case, do work
    for (int i=0; i<N; i++)
    {   
        cin >> S[i];
        // cout << S[i] << endl;
    }
    
    for (int i=0; i<N; i++)
    {
        sLength = S[i].length();
        sEven = "";
        sOdd = "";
        j=0;
            
        while (j < sLength)
        {
            if (j%2)
            {
                sEven += S[i][j];
            }
            else
            {
                sOdd += S[i][j];
            }
            j++;
        }
        cout << sOdd << " " << sEven << endl;
    }
    
    return 0;
}
