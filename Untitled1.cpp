#include <iostream>
using namespace std;
class SoNguyen {
private:
    int a;
    int b;

public:
    SoNguyen(int a, int b) {
        this->a = a;
        this->b = b;
    }

    int cong() {
        return a + b;
    }
};

int main() {
    int a, b;
    cin >> a;
	cin >> b;
    SoNguyen soNguyen(a, b);
    cout<<soNguyen.cong() << endl;
    return 0;
}
