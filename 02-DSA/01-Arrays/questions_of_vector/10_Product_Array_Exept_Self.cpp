
//PRODUCT OF AN ARRAY EXEPT SELF (LECTURE = 15)

//  (BRUTE FORCE APPRAOCH).

// int main(){
//     vector<int> arr = {1,2,3,4};

//     int size = arr.size();
//     vector<int>ans;
//     for(int i=0;i<size;i++){
//         int product =1;
//         for(int j=0;j<size;j++){
//             if(i!=j){
//                 product*=arr[j];

//             }
//         }
//         ans.push_back(product);
//     }

//     for(int i =0;i<ans.size();i++){
//         cout<<ans[i]<<" ";


//     }
// return 0;
// }

// (PREFIX (LEFT) AND SUFFIX (RIGHT)PRODUCT APPROACH)

// int main(){
//     vector<int>arr = {1,2,3,4};
//     int size = arr.size();
//     vector<int>ans(size,1);

    
//     for(int i =1;i<size;i++){
//         ans[i]= ans[i-1]*arr[i-1];
        
//     }

//    int suffix = 1;
//     for(int i=size-1;i>=0;i--){
//         ans[i]=suffix*ans[i];
//         suffix=suffix*arr[i];

//     }
    
   
// for(int i =0;i<size;i++){
//     cout<<ans[i]<<" ";
// }

// return 0;
// }
