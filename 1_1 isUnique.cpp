#include <iostream>
#include <string>
#include <vector>

using namespace std;

int isUnique(string s) {
    vector<int> A(128,0);
    
    int len = s.length();
    if(len > 128)   {
        cout << "Not Unique" << endl;
        return 0;
    }
    
    for(auto c : s) {
        if(A[c] > 0)    {
            cout << "Not Unique" << endl;
            return 0;
        }
        A[c]++;
    }
    cout << "Unique" << endl;
    return 1;
}

int main()
{
    string s = "asdfgh";
    cout << isUnique(s) << endl;

    return 0;
}
