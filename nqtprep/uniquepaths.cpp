#include <iostream>
#include <vector>
using namespace std;

static int count = 0;

void uniquePaths(int m, int n, int m1, int n1){
    
    if(m1 == m-1 && n1 == n-1){
        count++;
        return;
    }
    
    if(m1 < m){
        uniquePaths(m,n,m1+1,n1);
    }
    if(n1 < n){
        uniquePaths(m,n,m1,n1+1);
    }
    return;
}

int main() {
    vector<int> a = {};
    int count;
    return 0;
}