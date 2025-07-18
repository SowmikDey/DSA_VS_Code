#include <iostream>
#include <math.h>
using namespace std;


void find(int numtoadd, int num, int power, int sum, int &count) {
    if (sum == num) {
        ++count;
        return;
    }
    if (sum > num) {
        return;
    }

    int next = numtoadd + 1;
    int val  = (int)pow(next, power);
    if (val > (num - sum)) {
        return;
    }

    // INCLUDE next^power
    find(next, num, power, sum + val, count);
    // EXCLUDE next^power
    find(next, num, power, sum, count);
}



int main() {
   int n = 100;
int power = 2;
int sum = 0, count = 0, numtoadd = 0;
find(numtoadd, n, power, sum, count);
cout << count;      // now prints 3
    return 0;
}
