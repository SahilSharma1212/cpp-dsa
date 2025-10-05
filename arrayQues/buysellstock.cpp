#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<int> arr = {7,1,5,3,6,4};
    
    int diffVal = 0, currDiff=0, minVal=arr[0];

    for(int price:arr){

        if(price<minVal){
            minVal=price;
        }else{
            currDiff=price-minVal;

            if(currDiff>diffVal){
                diffVal=currDiff;
            }
        }
    }

    cout<<diffVal;
    return 0;
}