//MAJORITY ELEMENT  (brute force appraoch) (main function).


int main(){
    int arr[] = {3,2,3};
    int  size = sizeof(arr)/sizeof(int);

    for(int i = 0;i<size;i++){
       int count = 0;
        for(int j =0;j<size;j++){
            if(arr[i]==arr[j]){
                count++;
               
            }
        }
        if(count>size/2){
            cout<<arr[i];
            break;
            
        }
       
       
    }
return 0;
}


//MAJORITY ELEMENT  (brute force appraoch (self) ) (vector function).

int MajorityElement(vector<int>num){
    double n = num.size();
    
    for(int i=0 ;i<n;i++){
        int count = 0;
        for(int j =0;j<n;j++){
            if(num[i]==num[j]){
                count++;
            }
        }
        if(count>n/2){
           return num[i];
            
            
        }
    }
return 0;
}

int main(){
    vector<int>num = {3,2,3};
    cout<<MajorityElement(num);
    
    

return 0;
}


//MAJORITY ELEMENT  (brute force appraoch (apna college)) (vector function).

int MajorityElement(vector<int>nums){
    
    int n = nums.size();
   

    for(int i : nums){
        int count = 0;
        for(int j :nums){
            if(i==j){
                count++;
            }
        }
        if(count>n/2){
            return i;
           
        }
    }
return -1;
}

int main(){
    vector<int>nums = {2,2,2,1,1};
    cout<<MajorityElement(nums);

return 0;
}


//MAJORITY ELEMENT  (sorting approach) (vector function).

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

int main(){
    vector <int>arr = {1,4,2,2,3,3,2,2,2};

    int  size = arr.size();

    sort(arr.begin(),arr.end());

    int count =1;

     for(int i =1;i<size;i++){

        if(arr[i]==arr[i-1]){
            count++;
        }else{
            count=1;
        }

     
        if(count>size/2){
            cout<<arr[i];
            break;
        }
    }
return 0;   
   }



//MAJORITY ELEMENT(MOORE'S VOTING ALGORITM)).

int main(){
    int arr[] = {1,2,4};
    int size = sizeof(arr)/sizeof(int);
    int count=0 ,  ans =0;

    for(int i =0;i<size;i++){
        if(count==0){
            ans = arr[i];
        }

        if(arr[i]==ans){
            count++;
        }else{
            count--;
        
        }
    
    }

    int frequency = 0;
    for(int i=0;i<size;i++){
        if(arr[i]==ans){
            frequency++;
        }
    }
    if(frequency>size/2){
        cout<<ans;
    }else{
        cout<<"KOI MAJORITY ELEMENT NAHI HAI.";
    }
   
    
// return 0;
// }
