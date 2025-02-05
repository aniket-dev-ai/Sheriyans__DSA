class Solution {
public:
int Greatest(vector<int>& arr , int i){
    int c = 0;
    for(i ; i<arr.size();i++){
        if(c<arr[i]){
            c=arr[i];}
    }
    return c;
}
    vector<int> replaceElements(vector<int>& arr) {
    for(int i = 0 ; i<arr.size()-1;i++){
        arr[i]=Greatest(arr,i+1);
    }    
    arr[arr.size()-1]=-1;
    return arr;
    }
};