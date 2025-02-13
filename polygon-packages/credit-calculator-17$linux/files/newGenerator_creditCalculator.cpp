#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

vector<string> v = {"A+", "B+", "C+", "D+", "A", "B", "C", "D", "F"};

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);

	int len = stoi(argv[1]);

	string output = "";
	for (int j = 0; j <= len; j++)
	{
		int n = rnd.next(0, 8);
		output += v[n];
	}
	cout << output << endl;

	return 0;
}
