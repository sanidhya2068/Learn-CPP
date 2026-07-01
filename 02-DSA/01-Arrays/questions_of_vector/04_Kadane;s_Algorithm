// MAXIMUM SUBARRAY SUM-->

(KADANE'S ALGORITHM).

int MaximumSubaray(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(int);
    int maxSum  = INT_MIN;
    int currSum = 0;/

    for(int i=0;i<size;i++){
        currSum+=arr[i];
        maxSum = max(currSum,maxSum);
        if(currSum<0){
            currSum=0;
        }
        
    }
return maxSum;
}

int main(){
    cout<<MaximumSubaray();

return 0;
}
