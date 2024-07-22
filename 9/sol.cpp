#include <iostream>
using namespace std;

int main() {
    int num1, num2, num3;

    scanf("%d,%d,%d", &num1, &num2, &num3);
    int secondLargest;
    if ((num1 > num2 && num1 < num3) || (num1 > num3 && num1 < num2)) {
        secondLargest = num1;
    } 
    else if ((num2 > num1 && num2 < num3) || (num2 > num3 && num2 < num1)) {
        secondLargest = num2;
    } 
    else {
        secondLargest = num3;
    }

    cout << secondLargest << endl;

    return 0;
}
