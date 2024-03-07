#ifndef MOVE_H
#define MOVE_H

#include <unordered_set>
#include <string>

using namespace std;

class Move{
protected:
    unordered_set<string> winsAgainst;
    string name;
public:
    virtual std::string getName() = 0;
    virtual unordered_set<string> getWins() = 0;
};

#endif // MOVE_H
