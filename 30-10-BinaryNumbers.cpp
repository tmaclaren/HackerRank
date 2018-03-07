#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int solution(int);

int main(){
    int n;
    int result = 0;
    
    cin >> n;
    
    if ((n > 0) && (n < 1000001))
	{
        result = solution(n);
        cout << result << endl;
    }
    else
	{
				cout << "Invalid entry. Please try again." << endl;
	}
    
    return 0;
}

/////////////////////////////////////////////////////////
int solution(int N)
{
    int SIZE = 32;
	int binArray[SIZE] = {'\0'};

	// Convert int to binary
	int i, j;
	int ones=0, currentOnes=0;

    // cout << "Input N = " << N << endl;
    
	for (i = SIZE-1; i!=0; i--)
	{
		binArray[i] = N % 2;
		N = N / 2;	
        // cout << "N = " << N << " binArray[" << i << "] = " << binArray[i] << endl;
	}
    
    /*
	cout << "binArray => ";
    for (j = 0; j < SIZE; j++)
    {
        cout << binArray[j];
    }
    cout << endl;
    */
        
    // find the longest binary gap
    j=0;
	while (j < SIZE)
	{
		if (binArray[j] != 0)
		{
			currentOnes++;
		}
        
		else
		{
			currentOnes = 0;
		}
        
		if (ones < currentOnes)
        {
            ones = currentOnes;
        }
        
		j++;
		
	}

	// return longest gap
	return ones;
}