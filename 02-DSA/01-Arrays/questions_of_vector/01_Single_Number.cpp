QUESTIONS OF VECTOR-->

// 1) SINGLE NUMBER 

int singleNumber(){
   vector<int>nums = {1,2,3,4,3,2,1};
   int ans = 0;
   for(int num:nums){
    ans^=num;

   }
return ans;
}
int main(){
    cout<<singleNumber()<<endl;
    
return 0;
}
