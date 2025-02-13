#include "testlib.h"
using namespace std;
int main(int argc, char **argv)
{
	registerValidation(argc, argv);

	char arr[6] = {'A','B','C','D','F','+'};
	string val = inf.readToken();

	for(int i = 0;i < val.size();i++)
	{
		bool isFound = false;
		for(int j = 0;j < 6;j++)
		{
			if(val[i] == arr[j])
				isFound = true;
		}
		ensuref(isFound, "value Error");

		if(val[i] == '+' && i!=val.size()-1)
			ensuref(val[i+1] != '+',"plus Error");
	}


	ensuref(val.size() <= 1000, "length error");

	inf.readEof();
	return 0;
}
