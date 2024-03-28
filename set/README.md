# Set trong C++
## Tổng quan
- Set là một container được xây dựng sẵn, bạn cũng có thể gọi nó là cấu trúc dữ liệu hay thư viện cũng được. </br>
- Đây là một cấu trúc dữ liệu đã được xây dựng sẵn, để sử dụng bạn cần thêm thư viện set vào chương trình của mình. </br>
- Set được cài đặt bởi cấu trúc dữ liệu cây nhị phân tìm kiếm (binary search tree). </br>

## Tính chất
1. Các phần tử trong set có giá trị khác nhau, không có 2 phần tử có cùng giá trị </br>
2. Các phần tử trong set được tự động sắp xếp theo thứ tự tăng dần </br>
3. Tìm kiếm phần tử trong set chỉ mất độ phức tạp O(logN) </br>
4. Set không thể truy cập phần tử thông qua chỉ số như mảng hay vector, string. </br>

## Một số hàm cơ bản của set
|   |  Hàm | Chức năng  |   
|---|---|---|
|   1 | size()  | Kiểm tra số lượng phần tử trong set  |
|   2 |  insert() | Thêm phần tử vào trong set  |
|   3 |  empty() | Kiểm tra set rỗng, nếu đúng trả về True, ngược lại trả về False | 
|   4 |  clear() | Xóa toàn bộ phần tử trong set | 