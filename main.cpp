/***    subset target summation detector ***
 *
 *      Author: Moustafa Khaled     20170288
 */

#include <bits/stdc++.h>

using namespace std;

int countSubsetSumWays(const set<int> &set, int target);

int main() {
    set<int> sampleSet;
    sampleSet.insert(1);
    sampleSet.insert(3);
    sampleSet.insert(4);
    sampleSet.insert(5);
    cout << countSubsetSumWays(sampleSet, 5) << endl;
    cout << countSubsetSumWays(sampleSet, 11) << endl;
}

int countSubsetSumWays(const set<int> &s, int target) {
    set<int>::iterator it = s.begin();
    if (s.size() == 0 && target != 0) {          //* Base Case (1)
        return 0;
    } else if (s.size() == 0 && target == 0) {   //* Base Case (2)
        return 1;
    } else {
        int Hash = *it;
        set<int> rest = s;
        rest.erase(rest.begin());
        return countSubsetSumWays(rest, target) +
               countSubsetSumWays(rest, target - Hash);
    }
}
