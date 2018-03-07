#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
	private:
	vector<int> elements;
	
	public:
	int maximumDifference;
	
    // Add your code here
    Difference(vector<int> e) {
        this->elements = e;
    }

    void computeDifference() {
        int currentDiff = 0;
        
        for(int i=0; i < this->elements.size()-1; i++)
        {
            for (int j=1; j < this->elements.size(); j++)
            {
                // cout << "comparing " << this->elements[i] << " and " << this->elements[j] << endl;

                if (this->elements[i] > this->elements[j])
                {
                    // cout << "first larger" << endl;
                    currentDiff = this->elements[i] - this->elements[j];
                }
                else
                {
                    // cout << "second larger" << endl;
                    currentDiff = this->elements[j] - this->elements[i];
                }

                // cout << "checking if " << currentDiff << " is larger than " << this->maximumDifference << endl;
                if (currentDiff > this->maximumDifference)
                {
                    this->maximumDifference = currentDiff;
                }
            }
        }
    }
}; // End of Difference class
int main() {
	int N;
	cin >> N;
	
	vector<int> a;
	
	for (int i=0; i<N; i++) {
		int e;
		cin >> e;
		
		
		a.push_back(e);
	}
	
	Difference d(a);
	
	d.computeDifference();
	
	cout << d.maximumDifference;
	
	return 0;
}