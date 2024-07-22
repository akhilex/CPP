using namespace std;
int get_fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}
int main() {
    int n,r;
    cin>>n>>r;
    cout<<get_fact(r)/get_fact(r-n);
    
    return 0;
}
