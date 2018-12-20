#include <iostream>
#include <map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {

        if (s.length() != t.length()) {
            return false;
        }

        map<char, int> hash;
        for (int i=0; i<s.length(); ++i) {
            if (hash.find(s[i]) == hash.end()) {
                hash[s[i]] = 1;
            } else {
                hash[s[i]]++;
            }
        }

        for (int i=0; i<t.length(); ++i) {
            if (hash.find(t[i]) == hash.end()) {
                return false;
            } else {
                hash[t[i]]--;
            }
        }

        for (map<char,int>::iterator it=hash.begin(); it!=hash.end(); ++it) {
            // std::cout << it->first << " => " << it->second << '\n';
            if (it->second >= 1) {
                return false;
            }
        }

        return true;
    }
};


int main()
{
    Solution sol;
    cout << sol.isAnagram("ccac", "aacc") << endl;
    return 0;
}