
// MAJORITY ELEMENT-->(LECTURE = 11)

// 1) (a) PAIR SUM (BRUTE APPRAOCH).



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



// b) PAIR SUM (TWO POINTER APPROACH).


vector <int>PairSum(vector<int>arr, int size,int target){
    vector<int>ans;
    int i =0;
    int j = size-1;

    while(i<j){
        int pairsum = arr[i]+arr[j];

        if(pairsum==target){
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }else if(pairsum>target){
            j--;
        }else if(pairsum<target){
            i++;
        }
        

        
    }
return ans;

}

int main(){
    vector<int>arr = {2,7,11,15};
    int size = arr.size();
    int target = 17;
    vector<int>ans = PairSum(arr,size,target);
    cout<<ans[0]<<", "<<ans[1]<<endl;

return 0;

}



// MAJORITY ELEMENT  (brute force appraoch) (main function).


int main(){
    int arr[] = {1,2,3,2,2,1,2,3,2};
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


// MAJORITY ELEMENT  (brute force appraoch (self) ) (vector function).

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


// MAJORITY ELEMENT  (brute force appraoch (apna college)) (vector).

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



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
// MAJORITY ELEMENT  (sorting approach) (main function)


int main(){
    vector <int>arr = {1,1,2,2,2,2,1};

    int  size = arr.size();

    sort(arr.begin(),arr.end());

    if(size==1){
        cout<<arr[0];
        return 0;
    }
    

    int count =1;

     for(int i =1;i<size;i++){

        if(arr[i]==arr[i-1]){
            count++;
        }else{
            count =1;
        }
        
        if(count>size/2){
            cout<<arr[i];
           return 0;
        }


    }
cout<<"NO Element found";
return 0;    
}
   

// MAJORITY ELEMENT (SORTING APPROACH , when majority element always exist).


int MJ(vector<int>arr){
    
    int size = arr.size();

    sort(arr.begin() , arr.end());
cout<<arr[size/2];
return 0;
}

int main(){
    vector<int>arr = {1};
    MJ(arr);

}



// MAJORITY ELEMENT(MOORE'S VOTING ALGORITM))(main function)

int main(){
    int arr[] = {1,2,3,4};
    int size = sizeof(arr)/sizeof(int);
    int count=0 ,  ans =0;

    for(int i =0;i<size;i++){
        if(count==0){
            ans = arr[i];
            count =1;
        }else if(arr[i]==ans){
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
   
    
return 0;
}


// MAJORITY ELEMENT(Moore's Voting Algorithm)(vector function)


int MJ(vector<int>nums){
    int n = nums.size();
    int count =0 , ans =0;

    for(int i=0; i<n; i++){
        if(count==0){
            ans = nums[i];
            count=1;
        }else if(nums[i]==ans){
            count++;
        }else{
            count--;
        }
    }

    int fqr=0;
    for(int i=0;i<n;i++){
        if(nums[i]==ans){
            fqr++;
        }

    }
    if(fqr>n/2){
        return ans;
    }else{
        return -1;
    }

}

int main(){
    vector<int>nums = {1,2,3,4};
    cout<<MJ(nums);                     
return 0;
}
