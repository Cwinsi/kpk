#include <iostream>
#include <functional>
#include "PubSub.h"

using namespace std;

void listener(int data){
    cout << "listener1: " << data << endl;
}

void listener2(int data){
    cout << "listener2: " << data << endl;
}

void listener3(int data){
    cout << "listener2: " << data << endl;
}

int main() {
    PubSub<function<void (int)>, int> pubSub;

    pubSub.on(listener);
    pubSub.on(listener2);
    pubSub.on(listener3);

    pubSub.emit(5);

    return 0;
}