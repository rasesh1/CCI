#include <iostream>
#include <string>
#include <vector>

using namespace std;

string isPalindromePermutation(string s) {
    vector<int> A(128,0);
    
    int len = s.length();
    int total = 0, odds = 0;
    
    for(auto c : s) {
        if(c == ' ') continue;
        A[c]++;
        if(A[c]%2 == 0) odds--;
        else odds++;
        
        total++;
    }
    
    if(odds <= 1) return "It's a palindrome permutation.";
    return "It's not a palindrome permutation.";
}

int main()
{
    string s = "tactcoapapa";
    // s = "taco cat";
    cout << isPalindromePermutation(s) << endl;

    return 0;
}
