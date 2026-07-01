2) TO PRINT  SUBARRAY SUM.

int main(){
    int size = 7; 
    int arr[] = {3,-4,5,4,-1,7,-8};

    for(int i =0;i<size;i++){
        for(int j =i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k];
            }
            cout<<" ";
        }
    cout<<endl;
    }

return 0;
}
