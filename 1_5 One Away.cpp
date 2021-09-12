#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isOneStepAway(string s1, string s2)	{
	int len2 = s2.length();
	int len1 = s1.length();

	int diff=0;
	int j=0;
	int i=0;

	while(i < len1)	{
		if(diff > 1) return false;

		if(s1[i] != s2[j])	{
			diff++;
			if(len1 == len2) i++;
		}
		else i++;
		j++;

	}

	return diff<=1;
}

int main()	{
	string s1, s2;
	bool isOneAway = false;

	cin >> s1;
	cin >> s2;

	int len1 = s1.length();
	int len2 = s2.length();

	if(len1-len2>1 || len2-len1 > 1)	{
		isOneAway = false;
		cout << isOneAway << endl;
		return 0;
	}

	if(len1 == len2)	{
		isOneAway = isOneStepAway(s1, s2);
	}
	else if(len1 > len2)	{
		isOneAway = isOneStepAway(s2, s1);
	}
	else
		isOneAway = isOneStepAway(s1, s2);

	cout << isOneAway << endl;

	return 0;
}