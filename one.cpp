#include <iostream>
#include <thread>
#include <chrono>
using namespace std;
// Example function that the thread will execute
int val = 9;
void rawr(int value) {
   cout << "Thread is running with value: " << value <<endl;
}


void run(int & a , int b ) {
    cout << a << " " << "enter" << b << endl;
}
int main() {
    int params = 42; 
    // Create a thread and pass the function and parameter
  thread rawr_thread(rawr, params);
   this_thread::sleep_for(chrono :: seconds(1));
    // Wait for the thread to finish
    cout << "here" << endl;
    rawr_thread.join();
    this_thread::sleep_for(chrono :: seconds(1));
    thread run_thread(run, ref(val), 99);
    run_thread.join();
    cout <<"after thread";
    return 0;
}
