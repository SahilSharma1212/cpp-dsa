#include <iostream>
#include <vector>
using namespace std;

bool checkValidity(vector<vector<int>> &arr, int &r, int &c, int i){
    if(arr[r+2])
}

bool knightTour(vector<vector<int>> &board,int n, int i, int r, int c){
    if(i == n*n) return true;

    // if current pos valid, check further cases

    if(checkValidity (board, r, c, i)){
        return knightTour(board, n, i+1, r, c);
    }
}

int main() {
    vector<vector<int>> a = {};
    int r = 0, c = 0;
    return 0;
}