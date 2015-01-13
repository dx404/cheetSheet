#include <iostream>
#include <vector>
#include <thread>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    vector<thread> workers;
    for (int i = 0; i < 10; i++) {
        workers.push_back( thread ([i](){ // closure
            printf("hello from thread %d \n", i);
        }));
    }
    for (thread &th : workers) {
        th.join();
    }
    return 0;
}
