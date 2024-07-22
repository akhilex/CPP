using namespace std;

int main() {
    string n;
    cin >> n;
    string result = "";

    for (char ch : n) {
        if ((ch - '0') % 2 != 0) {
            result += ch;
        }
    }
    if (result.size() == 0) {
        cout << 0; 
    } else {
        cout << result; 
    }

    return 0;
}
