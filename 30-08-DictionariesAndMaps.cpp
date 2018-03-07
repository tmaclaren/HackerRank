#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    
    // Create an empty unordered_map
    int iRecords;
    string name, number;
    
    map<string, string> phoneBook;
    
    cin >> iRecords;
    
    // Insert Few elements in map
    for (int i=0; i<iRecords; i++)
    {
        cin >> name >> number;
	    phoneBook.insert( { name, number });
    }

    cin >> name;
    while (name != "")
    {
        // find element
        if (phoneBook.find(name) != phoneBook.end())
        {
            // sam=99912222
            cout << name << "=" << phoneBook.find(name)->second << endl;
        }
        else
        {
            cout << "Not found" << endl;
        }
            
        // get next element key to search
        name = "";
        cin >> name;
    }
    
    return 0;
}
