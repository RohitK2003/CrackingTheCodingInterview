//Is Unique: Implement an algorithm to determine if a string has all Unique characters. What if you cannot use additional data structures?

#include <bits/stdc++.h>
using namespace std;

//Brute - Force approach
bool isUnique(string str) {
    
    /*
    Create a set to store all the characters of the string.
    Check if the set length is equal to string length or not
    It should be true if all characters are unique, false otherwise
    */
    
    set<char> st;
    for(int i=0; i<str.size(); i++) {
        st.insert(str[i]);
    }
    return st.size()==str.size();
    
    // Issue with this solution is using extra data structure
}

//Solution without extra data structure
bool isUniqueNoExtraDataStructure (string str) {
    //Assume the string contains only lowercase letters
    //declare one integer with initial value 0 to store the position of traversed letters
    //calculate the letter position from a and check if exists or not
    //If not, store the letter
    
    int checker = 0;
    for(int i=0; i<str.size(); i++) {
        int pos = str[i]-'a';
        if((checker&(1<<pos))>0) {
            return false;
        }
        checker = checker | (1<<pos);
    }
    return true;
}

int main() {
	// your code goes here
	string str = "abcd";
	cout<<isUnique(str)<<endl;
	cout<<isUniqueNoExtraDataStructure(str);

}