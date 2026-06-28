#include <iostream>
using namespace std;

int main() {
    int a , b;

    cout<<"enter first no.: ";
    cin>>a;

    cout<<"enter secound no.: ";
    cin>>b;

     int sum = a+b;
     cout<<"sum = " <<sum <<endl;
    return 0;
}

CALCULATE TOTAL SUM THROUGH WHILE LOOP.
int main(){
    int n;
    cout<<"Enter the no.: ";
    cin>>n;

    int i=1;
    int sum = 0;
    while(i<=n){
        sum+=i;
        i+=1;
    }

    cout<<"Total sum is: " <<sum;
    return 0;
}
