//funcs
//#include <iostream>
//using namespace std;
//void get_matrix(int** a, int n, int m) {
//    for (int i = 0; i < n; i++) {
//        a[i] = new int[m];
//        for (int j = 0; j < m; j++) {
//            cin >> a[i][j];
//        }
//    }
//}
//float get_avg(int* a, int n) {
//    int sum = 0;
//    for (int i = 0; i < n; i++) {
//        sum += a[i];
//    }
//    return float((sum / n));
//}
//void get_ans(int* res,int**a,int n,int m ) {
//    for (int i = 0; i < n; i++) {
//        res[i] = get_avg(a[i],m);
//    }
//}
//int main()
//{
//    int n, m; cin >> n >> m;
//    int** a = new int* [n];
//    int* res=new int[n];
//    get_matrix(a, n, m);
//    get_ans(res, a, n, m);
//    for (int i = 0; i < n; i++) {
//        delete[] a[i];
//    }
//    delete[] a;
//    delete[] res;
//    return 0;
//}

//chain
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    int ans, a;
    cout << "Введите последовательность, оканчивающуюся нулем" << endl;
    cin >> a;
    bool f = false;
    for (int k = abs(a), sum = 0; k > 0; k /= 10) {
        sum += k % 10;
        if (sum > 14) f = true;
    }
    ans = a;
    while (a) {
        int temp = 0;
        for (int k = abs(a); k > 0; k /= 10) {
            temp += k % 10;
        }
        if (temp > 14 && a > ans) { ans = a; f = true; }
        cin >> a;
    }
    if (f) {
        cout << "Наибольшее число с суммой цифр >14 в последовательности: ";
        cout << ans;
    }
    else {
        cout << "Нет таких чисел";
    }
}