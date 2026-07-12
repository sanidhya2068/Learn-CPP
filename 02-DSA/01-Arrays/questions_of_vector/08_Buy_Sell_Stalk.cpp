// (B) (BUY AND SELL STALK).

int main(){
    int price[] = {7,1,5,3,6,4};
    int size = sizeof(price)/sizeof(int);
    int BB = price[0];
    int MP = 0;
    for(int i=1;i<size;i++){
        if(price[i]>BB){
            MP = max(MP,price[i]-BB);
            
        }
        BB = min(BB,price[i]);

    }
cout<<MP;
}
