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
using namespace std;


int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    int hourglass[16];
    int largest=-63;
    
    // Read 6x6 matrix input
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    
    // Find sum of each hourglass
    int h = 0;
    
    for (int x=0; x<4; x++)
    {
        for (int y=0; y<4; y++)
        {
            hourglass[h] =  arr[x][y] + 
                            arr[x][y+1] +
                            arr[x][y+2] +
                            arr[x+1][y+1] +
                            arr[x+2][y] +
                            arr[x+2][y+1] +
                            arr[x+2][y+2];
            
            // Find largest hourglass
            if (hourglass[h] > largest)
            {
                largest = hourglass[h];
            }
            // cout << largest;
            h++;
        }
    }
    
    cout << largest;
    return 0;
}
