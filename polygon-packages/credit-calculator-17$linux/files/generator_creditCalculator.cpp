#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

vector<string> v = {"A+", "B+", "C+", "D+", "A", "B", "C", "D", "F"};

int main(int argc, char *argv[])
{
	registerGen(argc, argv, 1);

	int index = stoi(argv[1]);

	for (int i = 0; i < 30; i++)
	{
		startTest(index + i);
		string output = "";
		for (int j = 0; j <= 50; j++)
		{
			int n = rnd.next(0, 8);
			output += v[n];
		}
		cout << output << endl;
	}

	for (int i = 30; i < 50; i++)
	{
		startTest(index + i);
		string output = "";
		for (int j = 0; j <= 500; j++)
		{
			int n = rnd.next(0, 8);
			output += v[n];
		}
		cout << output << endl;
	}
	return 0;
}
