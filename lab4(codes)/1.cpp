#include <bits/stdc++.h>
using namespace std;
int a[1000], sz;

struct Stack {
	void push(){
		int x;
		cin >> x;
		sz++;
		a[sz] = x;
		cout << "ok\n";
	}

	void pop(){
		cout << a[sz] << '\n';
		sz--;
	}

	void back(){
		cout << a[sz] << '\n';
	}

	void size(){
		cout << sz << '\n';
	}

	void clear(){
		sz = 0;
		cout << "ok\n";
	}

	void exit(){
		cout << "bye\n";
	}
};

int main(){
	Stack st;
	while(true){
		string ch;
		cin >> ch;
		if (ch == "push") st.push();
		else if (ch == "pop") st.pop();
		else if (ch == "back") st.back();
		else if (ch == "size") st.size();
		else if (ch == "clear") st.clear();
		else if (ch == "exit"){
			st.exit();
			exit(0);
		}
	}
}
