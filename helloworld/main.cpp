#include <iostream>

using namespace std;

bool kiemtrasonguyento(int n) {
	for(int i=2 ; i <= sqrt(n); i++){
		if(n%i==0)
			return false;
    }
    return n > 1;
}

int main()
{
    int i;
    std::cout << "Hello World" << std::endl;
    i = 1;
    cout << i;
    i++;
    cout << i;
    int a = kiemtrasonguyento(i);
    cout << a;
}