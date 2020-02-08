#include <iostream>
#include <deque>
#include <iomanip>
#include <ostream>
using namespace std;

ostream &tab(ostream &ostream1){
    return cout<<"\t";
}

int main() {
     deque<int> deque1;
     deque1.push_front(1);
     deque1.push_front(2);
     deque1.push_front(3);


//    for (deque<int>::iterator itr = deque1.begin(); itr != deque1.end()  ; ++itr) {
//        cout<<*itr<<tab;
//    }
    int a[] = {1,5,8,9,3,5,6,4};
    deque<int> deque2(a,a+8);
    for (deque<int>::iterator itr = deque2.begin(); itr != deque2.end()  ; ++itr) {
        cout<<*itr<<tab;

    }
    cout<<endl;
    deque2.pop_front();
    for (deque<int>::iterator itr = deque2.begin(); itr != deque2.end()  ; ++itr) {
        cout<<*itr<<tab;
    }
    return 0;
}
