( BRUTE APPROACH).

int main(){
    int arr[] = {3,-4,5,4,-1,7,-8};
    int size = sizeof(arr)/sizeof(int);
    int maxSum = INT_MIN;
    for(int i=0;i<size;i++){
        int currSum = 0;
        for(int j=i;j<size;j++){
            currSum+=arr[j];
            maxSum = max(currSum,maxSum);

        }
    }
    cout<<"Maximum subarray = " << maxSum<<endl;
}
