int main() {
    int N,target,i;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cin>>target;
    for(i=0;i<N;i++){
        if(arr[i]>=target){
            break;
        }
    }
    cout<<i;
    
    
    return 0;
}
