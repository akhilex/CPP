using namespace std;
int main() {
    int t;
    cin>>t;
    int in[t],out[t];
    for(int i=0;i<t;i++){
        cin>>in[i];
    }
    for(int i=0;i<t;i++){
        cin>>out[i];
    }
    int current = 0;
    int maxs = 0;
    
    for (int i = 0; i < t; i++) {
        current= current + in[i];
        current= current - out[i];
        maxs = max(maxs, current);
    }
    cout<<maxs;
    
    return 0;
}
