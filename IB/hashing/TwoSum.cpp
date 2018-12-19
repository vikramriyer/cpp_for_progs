#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
    public:
        vector<int> twoSum(const vector<int> &num, int target) {

            // map to store the mapping from number to its index.
            map<int, int> M;
            vector<int> ans;

            for (int i = 0; i < num.size(); i++) {
                int required = target - num[i];
                if (M.find(required) != M.end()) {
                    // We have our solution. index1 = M[required], index2 = i + 1 ( 1 based ).
                    ans.push_back(M[required]);
                    ans.push_back(i + 1);
                    return ans;
                }
                if (M.find(num[i]) == M.end()) {
                    // We want to maintain the minimum index at M[num[i]]. i + 1 will
                    // obviously be greater than whats already present.
                    M[num[i]] = i + 1;
                }
            }
            return ans;
        }
};

int main() {
  Solution sol;
  vector<int> vect;
  vect.push_back(2);
  vect.push_back(7);
  vect.push_back(11);
  vect.push_back(15);
  vector<int> result = sol.twoSum(vect, 9);
  /*for (int x: result) {
      cout << x<<" ";
  }*/
  /*for (int i=0; i<result.size(); i++) {
    cout<<result[i]<<" ";
  }*/
  vector<int>::iterator it;
  for (it = result.begin(); it != result.end(); ++it){
    cout<<*it<<" ";
  }
  cout<<endl;
  return 0;
}


/*
vector<int> Solution::twoSum(const vector<int> &A, int B) {
        map<int, int> M;
        vector<int> ans;

        for (int i = 0; i < A.size(); i++) {
            int required = B - A[i];
            if (M.find(required) != M.end()) {
                // We have our solution. index1 = M[required], index2 = i + 1 ( 1 based ).
                ans.push_back(M[required]);
                ans.push_back(i + 1);
                return ans;
            }
            if (M.find(A[i]) == M.end()) {
                // We want to maintain the minimum index at M[num[i]]. i + 1 will
                // obviously be greater than whats already present.
                M[A[i]] = i + 1;
            }
        }
        return ans;
}

*/
