#include <iostream>
// #include <algorithm>
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
    cout << "So luong phan tu trong set : \n";
    cout << se.size() << endl;
}