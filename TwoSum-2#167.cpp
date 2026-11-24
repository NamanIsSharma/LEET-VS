#include<bits/stdc++.h>
using namespace std;

vector <int> TwoSum2(vector <int>& numbers, int target){
    int n = numbers.size();
    int i = 0, j = n-1; // pointers declaring

    while(i<j){
        int sum = numbers[i] + numbers[j];

        if(sum == target) return {i+1,j+1}; 
        else if(sum > target) j--;
        else if(sum < target) i++;
    }
    return {};
}
int main(){
    vector <int> numbers = {5,8,10,12,17}; //sorted array
    int size = 5;
    int target = 17;

    vector <int> ans = TwoSum2(numbers,target);

    cout << ans[0] << " " << ans[1]; //printing index
}
