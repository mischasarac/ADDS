#include "Finder.h"
using namespace std;


vector<int> Finder::findSubstrings(string s1, string s2) {
    vector<int> result;
    string substrs;

    for(size_t i = 0; i < s2.size(); i++) {
        substrs += s2[i];
        size_t found = s1.find(substrs);
        if (found != string::npos) {
            result.push_back(found);
        } else {
            result.push_back(-1);
            break;
        }
    }
    return result;
}
