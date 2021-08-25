#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string urlify(string s, int len)    {
    
    if(len == 0)  return "";

    int total = s.length();
    
    int j = total-1;
    int i = len-1;
    
    while(i >= 0)   {
        if(s[i] != ' ') {
            s[j--] = s[i--];
        }
        else    {
            s[j--] = '0';
            s[j--] = '2';
            s[j--] = '%';
            i--;
        }
    }
    return s;
}

int main()
{
    string s = "Mr John Smith    ";
    int len = 13;
    
    cout << urlify(s, len) << endl;
    
    return 0;
}
