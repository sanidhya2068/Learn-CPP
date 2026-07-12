
// CONTAINER WITH MOST WATER-->


// (BURTE FORCE APPRAOCH).

// int main(){
// int arr[] = {1,8,6,2,5,4,8,3,7};
// int size = sizeof(arr)/sizeof(int);
// int width = 0 , hieght = 0 , ans = 0 , MaxWater =0; 
//     for(int i=0;i<size;i++){
//         for(int j =i+1;j<size;j++){
//             width = j-i;
//             hieght = min(arr[i], arr[j]);
//             ans = width*hieght;
//             MaxWater = max(MaxWater,ans);

//         }
//     }
// cout<<MaxWater;
// }


// (TWO POINTER APPRACOH).

// int main(){
//     int arr[] = {1,8,6,2,5,4,8,3,7};
//     int size = sizeof(arr)/sizeof(int);
//     int LP = 0 , RP = size-1;
//     int MaxWater = 0;
//     while(LP<RP){
//         int width = RP - LP;
//         int hieght = min(arr[RP],arr[LP]);
//         int ans = width*hieght;
//          MaxWater = max(MaxWater,ans);
//         if(arr[LP]<arr[RP]){
//             LP++;
//         }else{
//             RP--;
//         }
 
        
//     }
// cout<<MaxWater;
// }
