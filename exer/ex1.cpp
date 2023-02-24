//This is intended to practice vector
#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<int> v;
    cout << "the initial size of v is:" << v.size()
         << "\nthe initial capacity of v is:" << v.capacity() << endl;
    v.push_back(2);
    cout << "after push 2, capcacity of v is: " << v.capacity() << endl;
    v.push_back(3);
    cout << "after push 3, the size of v is:" << v.size()
         << "\nthe capacity of v is:" << v.capacity() << endl;
    v.push_back(4);
    cout <<"\nafter push 4, the capacity of v is: " << v.capacity() << endl;
    cout <<"\nthe size of v is: " << v.size() << "\nthe capacity of v is: " << v.capacity() << endl;

    return 0;

}