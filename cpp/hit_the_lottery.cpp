/*
Allen has a LOT of money. He has n 
 dollars in the bank. For security reasons, he wants to withdraw it in cash (we will not disclose the reasons here). The denominations for dollar bills are 1
 5
 10
 20
 100
What is the minimum number of bills Allen could receive after withdrawing his entire balance?

Input
The first and only line of input contains a single integer n 
Output
Output the minimum number of bills that Allen could receive.
*/

#include<iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	int no_of_bills=0;

	while(n>0){
		if(n>=100){
			no_of_bills += n/100;
			n%=100;
		} else if(n>=20){
			no_of_bills += n/20;
			n%=20;
		} else if(n >= 10){
			no_of_bills += n/10;
			n%=10;
		} else if(n >= 5){
			no_of_bills += n/5;
			n%=5;
		} else {
			no_of_bills += n;
			n = 0;
		}
	}
	
	cout << no_of_bills;

	return 0;
}
