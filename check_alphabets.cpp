#include <iostream>
using namespace std;
int main() {
    string a;
    cin>>a;
    int flag1=0,flag2=0,flag3=0;
    for(int i=0;i<a.length();i++){
        flag1 = flag1 | (1<<(a[i]-'a'));
        flag2 = flag2 | (1<<(a[i]-'A'));
    }
    cout<<(((flag2 == (1<<26)-1)  && (flag2 == (1<<26)-1) )?"yes":"no");
    return 0;
}
