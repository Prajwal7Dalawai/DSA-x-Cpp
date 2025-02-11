#include <iostream>
#include <queue>
#include <vector>
using namespace std;

template <typename T>
void display(priority_queue<T, vector<T>, greater<T>> pq, const string& name) {
    cout << name << ": ";
    priority_queue<T, vector<T>, greater<T>> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

template <typename T>
void display(priority_queue<T> pq, const string& name) {
    cout << name << ": ";
    priority_queue<T> temp = pq;
    while (!temp.empty()) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(40);
    pq.push(50);

    priority_queue<int, vector<int>, greater<int>> pq1;
    pq1.push(1);
    pq1.push(2);
    pq1.push(3);
    pq1.push(4);
    pq1.push(5);

    cout << "Size of pq: " << pq.size() << endl;
    cout << "Top of pq: " << pq.top() << endl;
    pq.pop();
    cout << "Size of pq after pop: " << pq.size() << endl;
    cout << "Top of pq after pop: " << pq.top() << endl;
    pq.push(60);
    cout << "Size of pq after push: " << pq.size() << endl;

    display(pq, "pq");
    display(pq1, "pq1");

    return 0;
}
