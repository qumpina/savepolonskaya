//funcs
#include <iostream>
using namespace std;
void get_matrix(int** a, int n, int m) {
    for (int i = 0; i < n; i++) {
        a[i] = new int[m];
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}
float get_avg(int* a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    return float((sum / n));
}
void get_ans(int* res,int**a,int n,int m ) {
    for (int i = 0; i < n; i++) {
        res[i] = get_avg(a[i],m);
    }
}
int main()
{
    int n, m; cin >> n >> m;
    int** a = new int* [n];
    int* res=new int[n];
    get_matrix(a, n, m);
    get_ans(res, a, n, m);
    for (int i = 0; i < n; i++) {
        delete[] a[i];
    }
    delete[] a;
    delete[] res;
    return 0;
}
