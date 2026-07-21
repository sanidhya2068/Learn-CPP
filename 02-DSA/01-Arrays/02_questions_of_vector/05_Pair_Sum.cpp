MAJORITY ELEMENT-->(LECTURE = 11)

1) PAIR SUM (BRUTE APPRAOCH).



vector<int> PairSUM(vector<int>nums,int target){
    vector<int>ans;
    int n = nums.size();

    for(int i =0;i<n;i++){

        for(int j =i+1;j<n;j++){

            if(nums[i]+nums[j]==target){

                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
return ans;
}


int main(){
    vector<int>nums = {2,7,11,15};
    int target = 9;
vector<int>ans = PairSUM(nums,target);
cout<<ans[0]<< ", "<< ans[1]<<endl;
return 0;   
}



2) PAIR SUM ( TWO POINTER APPROACH).



vector <int>PairSum(vector<int>arr, int size,int target){
    vector<int>ans;
    int i =0;
    int j = size-1;

    while(i<j){
        int pairsum = arr[i]+arr[j];
        if(pairsum>target){
            j--;

        }else if(pairsum<target){
            i++;
        }else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        

    }
return ans;
}

int main(){
    vector<int>arr = {2,7,11,15};
    int size = arr.size();
    int target = 26;
    vector<int>ans = PairSum(arr,size,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;

return 0;
    
}
