class Solution {
public:

    void duplicateZeros(vector<int>& arr) {
     vector<int> duplicate(arr);
     int size = arr.size(); 
     int i = 0 , j = 0;
     for(;i<size && j<size;j++){
        if(duplicate[j]==0){
            arr[i] = 0;
           if (i + 1 < size) arr[i + 1] = 0; 
                i += 2;
        }else{
            arr[i]=duplicate[j];
            i++;
        }
     }

    }
};