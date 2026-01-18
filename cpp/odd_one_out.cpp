#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;

	while(n--){
		int a, b, c, d;
		cin >> a;
		cin >> b;
		cin >> c;
		if(c==a){
			d = b;
		} else if (c==b){
			d = a;
		} else {
			d = c;
		}
		cout << d << endl;
	}
	return 0;
}
