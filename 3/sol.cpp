using namespace std;
int main() {
    int day,month,year;
    cin>>day>>month>>year;
    if(month==1 || month==2){
        month=month+10;
        year=year-1;
    }
    else{
        month=month-2;
    }
    // cout<<day<<" "<<month<<" "<<year<<endl;
    int k=day;
    int m=month;
    int D=year%100;
    int C=year/100;
    int F=k+((13*m-1)/5)+D+(D/4)+(C/4)-2*C;
    int r=F%7;
    if (r < 0) r += 7;
    switch (r) {
        case 0: cout << "Sunday"; break;
        case 1: cout << "Monday"; break;
        case 2: cout << "Tuesday"; break;
        case 3: cout << "Wednesday"; break;
        case 4: cout << "Thursday"; break;
        case 5: cout << "Friday"; break;
        case 6: cout << "Saturday"; break;
    }
    
    
    return 0;
}
