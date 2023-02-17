#include <bits/stdc++.h>
using namespace std;

int stt = 1;

struct NhanVien
{
    string id, name, gender, addr, tax_code, date;
    int d, m, y;
};

string STT(int i)
{
    string r = to_string(i);
    if (i < 10) r = "0000" + r;
    else r = "000" + r;
    return r;
}

bool cmp(NhanVien a, NhanVien b)
{
    if (a.y < b.y) return true;
    if (a.y == b.y) {
        if (a.m < b.m) return true;
        if (a.m == b.m) {
            if (a.d < b.d) return true;
        }
    }
    return false;
}

void nhap(NhanVien &a)
{
    a.id = STT(stt); stt++;
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.gender);
    scanf("%d/%d/%d\n", &a.m, &a.d, &a.y);
    getline(cin, a.addr);
    getline(cin, a.tax_code);
    getline(cin, a.date);
}

void sapxep(NhanVien ds[], int N)
{
    sort(ds, ds + N, cmp);
}

void inds(NhanVien ds[], int N)
{
    for (int i = 0; i < N; ++i) {
        cout << ds[i].id << " " << ds[i].name << " " << ds[i].gender << " ";
        printf("%.2d/%.2d/%.4d ", ds[i].m, ds[i].d, ds[i].y);
        cout << ds[i].addr << " " << ds[i].tax_code << " " << ds[i].date << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}