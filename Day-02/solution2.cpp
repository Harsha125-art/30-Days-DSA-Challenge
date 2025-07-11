vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    vector<int>temp;
    for(int i=k;i<arr.size();i++){
        temp.push_back(arr[i]);
    }
    for(int i=0;i<k;i++){
        temp.push_back(arr[i]);
    }
    return temp;
}
