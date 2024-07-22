using namespace std;
int main(){
    int count =1,N;
    cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    for(int i =1;i<N;i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[j]>= arr[i]){
                break;
            }
        }
        if (j==i){
            count++;
        }
    }
    cout<<count;
    return 0;
}
