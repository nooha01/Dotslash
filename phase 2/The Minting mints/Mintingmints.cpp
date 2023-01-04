#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  
    int n, len, count, sum = 0;
    cin >> n >> len;
    
    count = n;
    sum = n;
    for(int i=1; i<len; i++) {
        count = sum - 1;
        sum += count;
        //cout << count << " " << sum << " ";
    }
    
    cout << sum << endl;
    
    return 0;
}
