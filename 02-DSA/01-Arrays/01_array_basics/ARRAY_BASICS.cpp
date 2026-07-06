// ARRAYS-->(LECTURE = 8)


// CALCULATE SMALLEST AND LARGEST VALUE (method 1)

// SMALLEST VALUE

int main(){
    int smallest = INT_MAX;
    int size = 5;
    int smallest_Index = 0;
    int marks[] = {1,2,3,5,-5};

    for(int i=0;i<size;i++){
        if(marks[i]<smallest){
            smallest = marks[i];
            smallest_Index = i;
        }
  
    }

cout<<"smallest = " << smallest<< ", no. found at index " << smallest_Index <<endl;
}


// LARGEST VALUE

int main(){
    int largest = INT_MIN;
    int size = 6;
    int marks[] = {1,2,3,5,-5,0};

    for(int i =0;i<size;i++){

        if(marks[i]>largest){
            largest = marks[i];

        }
    }
cout<<largest<<endl;
}



// CALCULATE SMALLEST AND LARGEST VALUE (method 2)


// SMALLEST

int main(){
    int smallest = INT_MAX;
    int size = 6;
    int marks[] = {1,2,3,5,-5,0};

    for(int i =0;i<size;i++){
        smallest =  min(marks[i], smallest);
    }
cout<<smallest<<endl;

return 0;
}


// LARGEST

int main(){
    int largest = INT_MIN;
    int size = 6;
    int nums[] = {1,56,98,-7,323,7};
    for(int i=1;i<size;i++){
        largest = max(nums[i],largest);

    }
cout<<"LARGEST VALUE: "<< largest <<endl;
return 0;}


// PRINTING THE INDEX BY TAKING NUMBER->(LINEAR SEARCH)

int main(){
    int num = 10;
    int size = 7;
    int arr[] = {4,2,7,8,1,2,5};
        
    for(int i=0;i<size;i++){

        if(num==arr[i]){
            cout<<"Found at index " << i<<endl;
            return 0;

        }
    }

cout<<"-1, element not found"<<endl;

return 0;

}



// SMALLEST AND LARGEST-->(LOOP)

int main(){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_Index = 0;
    int largest_Index = 0;
    int size = 8;
    int arr[] = {4,6,23,7,4,2,14,3};
    for(int i = 0 ; i< size ; i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallest_Index = i;

        }
   
    }

    for(int i = 0 ; i< size ; i++){
        if(arr[i]>largest){
            largest = arr[i];
            largest_Index = i;

        }
   
    }
cout<<"smallest = " << smallest<<" found at index = " << smallest_Index<<endl;
cout<<"largest = " << largest<< " found at index = " << largest_Index<<endl;
return 0;
}



// SMALLEST AND LARGEST-->(FUNCTION)

int main(){
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int size = 5;
    int arr[] = {1,3,5,2,6};
    for(int i = 0 ; i<size ;i++){
        smallest = min(arr[i],smallest);
        largest  = max(arr[i],largest);
        
    }
cout<<"smallest = " << smallest<<endl;
cout<<"largest = " << largest<<endl;   
}


// LINEAR SEARCH-->(find index)

int index(int arr[] , int size , int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;

        }
    }
return -1;
}

int main(){
    int size = 5;
    int arr[] = {1,2,5,4,6};
    int target = 4;

    cout<<index(arr,size,target)<<endl;
return 0;
}

// REVERSE OF AN ARRAY(TWO POINTER APPROACH)

int main(){
    int size = 8;
    int arr[8]  = {1,3,4,8,2,6,4,9};
    int start  = 0;
    int end = 7;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
       
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<< " ";

    }
    
return 0;
}



// QUESTIONS OF ARRAY-->

// 1) WRITE A FUNCTION TO CALCULATE THE SUM AND PRODUCT OF ALL NUMBERS OF ARRAY.

int main(){
    int size = 4;
    int arr[] = {1,2,3,4};
    int sum = 0;
    int product = 1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];

       
    }
cout<<"sum = "<< sum<<endl;
cout<<"product = "<<product;
return 0;
}


// 2) WRITE TO SWAP THA MAX AND MIN NUMBER OF AN ARRAY.


int main(){
    int size = 6;
    int arr[] = {34,62,745,255,25,7,45};
    int start = 0;
    int end = size - 1;
    int sz = sizeof(arr) / sizeof(int);
    cout <<sz<<endl;
return 0;
    

    }

void swapMaxMin(int arr[], int size) {
    if (size <= 1) return; // Agar array me 1 ya 0 element hai toh swap nahi chahiye

    int minIdx = 0;
    int maxIdx = 0;

    for (int i = 1; i < size; i++) {
        // Min element dhoodhne ke liye
        if (arr[i] < arr[minIdx]) {
            minIdx = i;
        }
        // Max element dhoodhne ke liye
        if (arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }

    // Max aur Min values ko swap karna
    swap(arr[minIdx], arr[maxIdx]);
}

int main() {
    int arr[] = {4, 1, 9, 3, 7, 2};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Array: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    // Function call
    swapMaxMin(arr, size);

    cout << "Array after swap: ";
    for(int i = 0; i < size; i++) cout << arr[i] << " ";
    cout << endl;

    return 0;
}


// (MY Method)

int main(){
    int size = 5;
    int arr[] = {4,1,9,3,7};
    
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_Index = 0;
    int largest_Index = 0;
    
    cout<<"Before swap: ";

    for(int i=0;i<size;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;

  
    for(int i=0;i<size;i++){
        if(arr[i]<smallest){
            smallest = arr[i];
            smallest_Index = i;
        }
    }

    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            largest = arr[i];
            largest_Index = i;
        }
    }



swap(arr[smallest_Index],arr[largest_Index]);

 

cout<<"After swap: ";

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }



return 0;
}



3) write to print all tha unique value in array.

int main(){
    int size = 7;
    int arr[] = {1,2,3,1,2,3,4};
    for(int i=0;i<size;i++){

        int count = 0;

        for(int j=0;j<size;j++){

            if(arr[i]==arr[j]){
                count++;
            }

        }
    if(count==1){
        cout<<arr[i]<<endl;
    }
    }
return 0;
   

}

4) write a function to print intersection of two array.

int main(){
    int size = 11;
    int arr[] = {1,2,3,4,7,5,43,673,254,365,88};
    int arr2[] = {4,5,2,1,3,7,64,24,88,2452,34};

    for(int i=0;i<size;i++){

        for(int j=0;j<size;j++){

        
        if(arr[i]==arr2[j]){
            cout<<arr[i]<<" ";
            
            
        }
    }
  
    }
return 0;
}
