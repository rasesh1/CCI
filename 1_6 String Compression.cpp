#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()	{
	string s;
	string res = "";

	cin >> s;
	int len = s.length();

	if(len == 0)	{
		cout << res << endl;
		return 0;
	}

	char curr = s[0];
	int count = 1;
	for(int i=1; i<len; i++)	{
		char c = s[i];
		if(c == curr)	{
			count++;
		}
		else	{
			res = res + curr + to_string(count);
			curr = s[i];
			count = 1;
		}

		if(i == len-1)
			res = res + curr + to_string(count);
		
	}
	if(res.length() < s.length())
		cout << res << endl;
	else
		cout << s << endl;

	return 0;
}