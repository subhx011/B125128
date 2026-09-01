#include <iostream>
using namespace std;
void update(int *status) {
    if (*status == 1)
        *status = 2;
    else if (*status == 2)
        *status = 3;
}
string Status(int status) {
    if (status == 1)
        return "Processing";
    else if (status == 2)
        return "Shipped";
    else
        return "Delivered";
}
int main() {
    int status;
    cout<<"enter status"<<endl;
    cin>>status;
    cout << "Before Update: " << Status(status) << endl;
    update(&status);
    cout << "After Update: " << Status(status) << endl;
    return 0;
}