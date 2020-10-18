#include <bits/stdc++.h>
#include <stack>
using namespace std;

int main(){
	string s;
	cin >> s;
	stack<char> str;
	int check = 1;

	for (int i = 0; i < s.size(); i++){
		if (s[i] == '(' || s[i] == '[' || s[i] == '{') str.push(s[i]);

		if (s[i] == ')'){
			if (str.size() == 0 || str.top() != '('){
				check = 0;
				break;
			}
			else{
				str.pop();
			}
		} 
		if (s[i] == ']'){
			if (str.size() == 0 || str.top() != '['){
				check = 0;
				break;
			}
			else{
				str.pop();
			}
		}
		if (s[i] == '}'){
			if (str.size() == 0 || str.top() != '{'){
				check = 0;
				break;
			}
			else{
				str.pop();
			}
		}
	}

	if (str.size() != 0) check = 0;
	if (check == 0) cout << "no";
	if (check == 1) cout << "yes";
}
