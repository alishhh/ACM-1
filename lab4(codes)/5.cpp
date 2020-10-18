#include <bits/stdc++.h> 
#include <vector>
#include <map>
using namespace std;

int main(){
	map<int, vector<string>> myMap;
	int n;
	string s;
	while (cin >> n >> s) myMap[n].push_back(s);

	for (auto x: myMap){
		for (int i = 0; i < x.second.size(); i++){
			cout << x.first << " " << x.second[i] << endl;
		}
	}
}
