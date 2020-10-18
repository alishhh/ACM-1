#include <bits/stdc++.h>
using namespace std;
 
struct Queue{
    int a[100000];
    int fr;
    int ls;
    
    Queue(){
        fr = 0;
        ls = 0;
    }
 
    void push(int n){
        a[ls] = n;
        ls++;
    }
 
    int pop(){
        int d = a[fr];
        fr++;
        return d;
    }
 
    int front(){
        return a[fr];
    }
 
    int size(){
        return ls - fr;
    }
 
    string clear(){
        ls = 0;
        fr = 0;
        return "ok";
    }
 
    string exit(){
        return "bye";
    }
};
 
int main() {
    Queue q;
    while(true){
    	string op;
    	cin >> op;
        if(op == "push"){
            int n;
            cin >> n;
            q.push(n);
            cout << "ok\n";
        }
        else if(op == "pop"){
            cout << q.pop() << '\n';
        }
        else if(op == "front"){
            cout << q.front() << '\n';
        }
        else if(op == "size"){
            cout << q.size() << '\n';
        }
        else if(op == "clear"){
            cout << q.clear() << '\n';
        }
        else if(op == "exit"){
            cout << q.exit() << '\n';
            return 0;
        }
    }
}
