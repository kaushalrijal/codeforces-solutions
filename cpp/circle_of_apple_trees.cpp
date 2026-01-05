#include<iostream>
#include<vector>
#include<set>

using namespace std;

int main(){
	int t;

	cin >> t;
	vector<int> outputs;

	int n;
	while(t-->0){
		cin >> n;
		set<int> s;
		int b;
		for(int i=0; i<n; i++){
			cin >> b;
			s.insert(b);
		}
		outputs.push_back(s.size());
	}

	for(auto x: outputs) {
		cout << x << endl;
	}

	return 0;
}
