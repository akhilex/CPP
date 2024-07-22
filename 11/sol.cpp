using namespace std;
int main() {
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            cin >> arr[i][j];
        }
    }

    int max_full = 0;
    int row_index = 0;
    for (int i = 0; i < r; ++i) {
        int full_count = 0;
        for (int j = 0; j < c; ++j) {
            if (arr[i][j] == 1) {
                full_count++;
            }
        }
        if (full_count > max_full) {
            max_full = full_count;
            row_index = i + 1;
        }
    }

    cout << row_index << endl;
    return 0;
}
