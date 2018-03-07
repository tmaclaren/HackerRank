#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    private:
        string queue;
        string stack;
    
    public:
        // constructor
        // Solution();
    
        //////////////// Last in, first out
        // push on stack - add to end
        void pushCharacter(char c)
        {
            stack += c;
            // cout << "push stack => " << stack << endl;
        }
    
        // pop from stack - remove from end
        void enqueueCharacter(char c)
        {
            queue += c;
            // cout << "enqueue queue => " << queue << endl;
        }
    
    
        ////////////////
        // add to stack - Last in, last out - add to end
        char popCharacter(void)
        {
            char last;
            int i = stack.size();
            last = stack[i-1];
            stack = stack.substr(0, stack.size()-1);
            // cout << "compate " << last << " <-> " ;
            return last;
        }
    
        // remove from queue - remove from front
        char dequeueCharacter(void)
        {
            char first;
            first = queue[0];
            // cout << "queue before -> " << queue << endl;
            if (queue.size() > 1)
            {
                // cout << "queue before -> " << queue << endl;
                queue = queue.substr(1, queue.size());
                // cout << "queue after -> " << queue << endl << endl;
            }
            else
            {
                queue = "";
            }
            // cout << first << endl;
            return first;
        }
};


int main() {
	// read the string s
	string s;
	getline(cin, s);
	
	// create the Solution class object p.
	Solution obj;
	
	// push/enqueue all the characters of string s to stack.
	for (int i=0; i<s.length(); i++) {
		obj.pushCharacter(s[i]);
		obj.enqueueCharacter)s[i]);
	}
	
	bool isPalindrome = true;
	
	// pop the top character from stack
	// dequeue the first character from queue
	// compare both the characters
	for (int i=0; i<s.length()/2; i++) {
		if(obj.popCharacter() != obj.dequeueCharacter()) {
			isPalindrome = false;
			
			break;
		}
	}
	
	// finally print whether string s is palindrome or not
	if(isPalindrome) {
		cout << "The word, " << s << ", is a palindrome.";
	} else {
		cout << "The word, " << s << ", is not a palindrome.";
	}
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	