#include <iostream>
using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"After swap: a = "<<*a<<" b = "<<*b<<endl;
}

int main() {
    int x = 10, y = 20;
    cout<<"Before swap:a = "<<x<<" b = "<<y<<endl;
    swap(&x, &y);
    return 0;
}