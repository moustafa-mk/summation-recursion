#include <bits/stdc++.h>

using namespace std;

int countSubsetSumWays(const set<int> &set, int target);

int main() {
	set<int> sampleSet;          //* try any combination 3shan lw feh 3'lta
	sampleSet.insert(1);
    sampleSet.insert(3);
    sampleSet.insert(4);
    sampleSet.insert(5);
	cout << countSubsetSumWays(sampleSet, 5) << endl;
	cout << countSubsetSumWays(sampleSet, 11) << endl;
}

int countSubsetSumWays(const set<int> &s, int target) {
    set <int> :: iterator it=s.begin();
	if (s.size()==0 && target!=0) {          //* Base Case (1)
		return 0;
	} else if (s.size()==0 && target==0) {   //* Base Case (2)
		return 1;
	} else {
		int Hash = *it;                      //* ba5od awl element kol marra men set "s", b3den b3ml set tanya b7ot feha el remaining elements
		set<int> rest = s;
		rest.erase(rest.begin());
	 	return countSubsetSumWays(rest, target) + countSubsetSumWays(rest, target - Hash); //* msh m7tagen wa7da yb2a feha target+Hash, set already
	}                                                                                      // sort el elements in ascending order fa ana kda kda
}                                                                                          // ba5od as3'ar element atr7o mel target

