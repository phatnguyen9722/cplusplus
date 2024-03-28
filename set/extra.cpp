// Duyệt set
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(){
    set<int> se; // {}
    se.insert(3); // {3}
    se.insert(1); // {1, 3}
    se.insert(1); // {1, 3}
    se.insert(2); // {1, 2, 3}
    se.insert(3); // {1, 2, 3}
    se.insert(2); // {1, 2, 3}
    se.insert(4); // {1, 2, 3, 4}
    cout << "Duyet set bang range-based for loop : \n";
    for(int x : se){
        cout << x << ' ';
    }
    cout << "\nDuyet set bang iterator : \n";
    for(set<int>::iterator it = se.begin(); it != se.end(); ++it){
        cout << *it << " ";
    }
}