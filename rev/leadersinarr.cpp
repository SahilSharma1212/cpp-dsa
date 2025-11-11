#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void leadersInArray(vector<int> &arr){
    vector<int> leaders;

    int currlar = arr.back();
    leaders.push_back(currlar);

    for(int i = arr.size()-2; i >= 0; i--){
        if(arr[i] > currlar){
            currlar = arr[i];
            leaders.push_back(arr[i]);
        }
    }

    reverse(leaders.begin(), leaders.end());
    for(int i : leaders){
        cout << i << " , ";
    }

}

// int i = 1;

// while( i < arr.size()){
//     while(arr[i] - 1 == arr[i-1] || arr[i] == arr[i-1]){
//         if(arr[i] != arr[i-1]){
//             currStreak++;
//         }
//         i++;
//     }

//     longest = max(currStreak, longest);
//     currStreak = 1;
//     i++;
// }

// cout << longest << endl;

int longestConsecutive(vector<int> &arr) {
    if (arr.empty()) return 0;

    sort(arr.begin(), arr.end());
    int longest = 1;
    int currStreak = 1;



    for(int i = 1; i < arr.size(); i++){
        if(arr[i] == arr[i-1]) continue;

        if(arr[i] == arr[i-1] + 1){
            currStreak ++;
        }else{
            longest = max(currStreak, longest);
            currStreak = 1;
        }
    }

    longest = max(currStreak, longest);
    cout << longest << endl;
}

int main() {
    vector<int> a = {16, 17, 4, 3, 5, 2};
    vector<int> ls = {10, 5, 11, 6, 7, 20, 30, 8, 9};
    
    longestConsecutive(ls);
    leadersInArray(a);
    return 0;
}