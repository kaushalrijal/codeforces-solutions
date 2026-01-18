/*
Sereja and Dima play a game. The rules of the game are very simple. The players have n cards in a row. Each card contains a number, all numbers on the cards are distinct. The players take turns, Sereja moves first. During his turn a player can take one card: either the leftmost card in a row, or the rightmost one. The game ends when there is no more cards. The player who has the maximum sum of numbers on his cards by the end of the game, wins.

Sereja and Dima are being greedy. Each of them chooses the card with the larger number during his move.

Inna is a friend of Sereja and Dima. She knows which strategy the guys are using, so she wants to determine the final score, given the initial state of the game. Help her.

Input
The first line contains integer n (1 ≤ n ≤ 1000) — the number of cards on the table. The second line contains space-separated numbers on the cards from left to right. The numbers on the cards are distinct integers from 1 to 1000.

Output
On a single line, print two integers. The first number is the number of Sereja's points at the end of the game, the second number is the number of Dima's points at the end of the game.
*/

#include<iostream>
#include<deque>

using namespace std;

int main(){
	int n;
	cin >> n;

	int ser = 0;
	int dim = 0;
	deque<int> cards;
	for(int i=0; i<n; i++){
		int k;
		cin >> k;
		cards.push_back(k);
	}

	for(int i=0; i<n; i++){
		if(i%2==0){
     			if(cards.front() > cards.back()){
     				ser += cards.front();
     				cards.pop_front();
     			} else {
     				ser += cards.back();
     				cards.pop_back();
     			}
     		} else {
     			if(cards.front() > cards.back()){
     				dim += cards.front();
				cards.pop_front();
     			} else {
     				dim += cards.back();
     				cards.pop_back();
     			}
     		}
	}

     	cout << ser << " " << dim;



	return 0;
}
