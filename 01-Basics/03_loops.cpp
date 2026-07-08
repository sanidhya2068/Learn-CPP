#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number.: ";
    cin>>n;
    int count = 1;
    while(count<=n){
        cout<< count << " ";
        count+=1;
    }
    cout<< endl;
    return 0;
}
