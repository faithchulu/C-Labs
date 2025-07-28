#include <iostream>
using namespace std;

int sum (int a){
    if (a == 0) {
        return 0;
    } else {
        return  a + sum(a-1);
    }
}

int printArray(int myArr[5]){
    for (int i = 0; i < 5; i++) {
        cout << myArr[i] << " ";
    }
    cout << endl;
    return 0;
}

int main() {

    cout << "The output is: " << sum(5);


    cout << endl;
    return 0;
}



int multiply(int x, int y = 2) {
    return x * y;
}

int main() {
    cout << multiply(5) << endl;     // Output: 10 (5 * 2)
    cout << multiply(5, 3) << endl;  // Output: 15
}


