#include "testlib.h"
using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    int N = inf.readInt(1, 100, "N");
    inf.readSpace();
    int P = inf.readInt(0, 6, "P");
    inf.readEoln();

    int offset = 1;
    for (int i = 0; i < P; i++)
        offset *= 10;
    long long int able_maximum = 100 * offset;

    // Read result of previous time
    long long gets_sum = 0;
    for (int i = 0; i < N; i++) {
        int gets = inf.readInt(0, able_maximum, "prev_i");
        gets_sum += gets;
        if (i != N - 1)
            inf.readSpace();
    }
    ensuref(able_maximum == gets_sum, "The sum of total previous vote rate is not 100.");
    inf.readEoln();

    // Read result of current time
    gets_sum = 0;
    for (int i = 0; i < N; i++) {
        int gets = inf.readInt(0, able_maximum, "curr_i");
        gets_sum += gets;
        if (i != N - 1)
            inf.readSpace();
    }
    ensuref(able_maximum == gets_sum, "The sum of total current vote rate is not 100.");
    inf.readEoln();

    inf.readEof(); 
    return 0;
}
