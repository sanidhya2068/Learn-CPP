double myPow(double x , long long n){
    double ans = 1;
    long long N =n;
    if(N<0){
        x = 1/x;
        N = -N;

    }
    while(N>0){
        if(N%2==1){
            ans = ans *x;

        }
        x *=x;
        N/=2;
    }
return ans;
}

int main(){
    int x =2;
    int n =-3;
    cout<<myPow(x,n);
return 0;
}
