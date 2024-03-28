#include <utility>
#include <iostream>

using namespace std;

// Pair là một kiểu container lưu trữ dữ liệu theo cặp
// Ví dụ: Toạ độ Oxy, thời gian bắt đầu và kết thúc của một công việc,...
// Nằm trong thư viện utility

// Phần từ thứ nhất của pair gọi là first
// Phần tử thứ hai của pair gọi là second

int main() {
    pair<int, int> p = make_pair(10, 20);
    cout << p.first << " " << p.second << endl;

    pair<char, int> p1 = make_pair('@', 20);
    cout << p1.first << " " << p1.second << endl;

    // Cannot use this in compiler in Microsoft product or version C++ below 11
    // pair<int, int> p2 = {10, 20};
    // cout << p2.first << " " << p2.second << endl;

    return 0;
}