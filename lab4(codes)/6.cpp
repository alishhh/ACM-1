#include <bits/stdc++.h>
#include <queue>
using namespace std;
int const N = 1e6;

int main() {
	queue<int> player1, player2;
	int num;

	for (int i = 1; i <= 5; ++i){
		cin >> num;
		player1.push(num);
	}

	for (int i = 1; i <= 5; ++i){
		cin >> num;
		player2.push(num);
	}


	for (int i = 1; i <= N; ++i){
		int a = player1.front(), b = player2.front();
		player1.pop(); player2.pop();

		if (a > b){
			if (a == 9 && b == 0){
				player2.push(a);
				player2.push(b);
			}
			else {
				player1.push(a);
				player1.push(b);
			}
		}

		else {
			if (b == 9 && a == 0){
				player1.push(a);
				player1.push(b);
			}
			else {
				player2.push(a);
				player2.push(b);
			}
		}


		if (player1.size() == 0){
			cout << "second " << i;
			break;
		}
		if (player2.size() == 0){
			cout << "first " << i;
			break;
		}

		if (i == N){
			cout << "botva";
			break;
		}
	}
}
