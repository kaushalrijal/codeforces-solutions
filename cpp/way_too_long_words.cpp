#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
	int n;
	cin >> n;

	vector<string> words(n);
	for(int i=0; i<n; i++){
		cin >> words[i];
	}

	size_t word_length;
	for(int i=0; i<n; i++){
		word_length = words[i].length();
		if(word_length > 10){
			cout << words[i][0] << to_string(word_length-2) << words[i][word_length - 1] << endl ;
		} else {
			cout << words[i] << endl;
		}
	}

	return 0;
}
