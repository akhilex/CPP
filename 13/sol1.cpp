using namespace std;
int main() {
    int n,i;
    cin>>n;
    int max=0;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
                int profit=arr[j]-arr[i];
                if(profit>max){
                    max=profit;
                }
                
            }
            
            
        }
    }
    cout<<max;
    return 0;
}
