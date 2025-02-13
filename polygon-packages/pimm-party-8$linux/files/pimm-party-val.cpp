#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

int main(int argc, char** argv) {
    registerValidation(argc, argv);

    int N = inf.readInt(1, 7, "N");
    inf.readSpace();
    int M = inf.readInt(1, 7, "M");
    inf.readSpace();
    int X = inf.readInt(0, N * M, "X");
    inf.readSpace();
    int Y = inf.readInt(0, N * M, "Y");
    inf.readEoln();

    ensure(1 <= X + Y && X + Y <= N * M);

    string room;

    for (int i = 0; i < N; i++) {
        room = inf.readLine("[A*]+", "room");
        ensure(room.size() == M);
        for (auto s : room)
            Y -= s == 'A';
    }
    
    ensure(Y == 0);
    inf.readEof();

    return 0;
}
