#include <iostream> 
#include <string>
using namespace std;
int const sz = 1e6;

struct Queue{
    int a[sz], fr, ls;
    
    Queue(){
        fr = 0;
        ls = 0;
    }
 
    void push(int n){
        a[ls] = n;
        ls++;
    }
 
    int pop(){
        int n = a[fr];
        fr++;
        return n;
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
          if (q.size() == 0){
            cout << "error\n";
          }
          else {
              cout << q.pop() << '\n';
            }
        }
        else if(op == "front"){
          if (q.size() == 0){
            cout << "error\n";
          }
          else {
              cout << q.front() << '\n';
            }
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
