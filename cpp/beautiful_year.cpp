/*
It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.

Input
The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.

Output
Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
*/

#include<iostream>
#include<set>

using namespace std;

bool isBeautiful(int n){
	set<int> digits;
	while(n>0){
		digits.insert(n%10);
		n/=10;
	}
	return digits.size() == 4;
}

int main(){
	int n;
	cin >> n;

	while(true){
		if(isBeautiful(++n)) break;
	}

	cout << n;

	return 0;
}
