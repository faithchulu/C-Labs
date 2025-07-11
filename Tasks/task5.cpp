#include <iostream>
using namespace std;

int main() {
    // Declare and initialize the array
    int numbers[] = {10, 20, 30, 40, 50};

    // Range-based for loop (for-each loop)
    for (int num : numbers) {
        cout << num << endl;
    }

    return 0;
}
