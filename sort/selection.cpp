#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>&arr){
    for (int i =0;i<arr.size();i++){
        int min_index= i;
        for (int j=i+1;j<arr.size();j++){
            if (arr[j]< arr[min_index]){
               min_index=j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}
int main(){

    vector<int> arr = {5,3,8,1,23,43,221};
    selection_sort(arr);
    for (int i =0; i<arr.size(); i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}