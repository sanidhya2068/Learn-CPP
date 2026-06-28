#include <iostream>
using namespace std;

int main(){    
    int n = 17;
    bool is_Prime = true;

    for(int i=2; i<=n-1; i++){    
        if(n%i==0){
            is_Prime = false;
            break;
        }
    }

    if(is_Prime == true){
        cout<<"prime";

    }else{
        cout<<"NON PRIME";
    }
    return 0;

   
}
