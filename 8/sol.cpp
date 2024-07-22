int main() {
    int t;
    cin>>t;
    int gcost,pcost,n;
    int p1,p2;
    int cost_gp,cost_pg;
    for(int i=0;i<t;i++){
        int count1=0,count2=0;
        cin>>gcost>>pcost;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>p1>>p2;
            if(p1==1){
                count1=count1+1;
            }
            if(p2==1){
                count2=count2+1;
            }
            
        }
        
        cost_gp=gcost*count1+pcost*count2;
        cost_pg=pcost*count1+gcost*count2;
        
        if(cost_gp<cost_pg){
            cout<<cost_gp<<endl;
            
        }
        else{
            cout<<cost_pg<<endl;
        }
        
    }
    
    return 0;
}
