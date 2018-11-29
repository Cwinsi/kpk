#ifndef P32_PUBSUB_PUBSUB_H
#define P32_PUBSUB_PUBSUB_H

#include <functional>

template <class Function, class Data>
class PubSub {
private:
    Function *subscribers;
    int subscribersCount;
public:
    explicit PubSub() {
        subscribersCount = 0;
        subscribers = new Function[0];
    }

    void on(Function function) {
        subscribersCount++;
        Function *subscribers = new Function[subscribersCount];

        for(int i = 0; i < subscribersCount - 1; i++) {
            subscribers[i] = this->subscribers[i];
        }
        subscribers[subscribersCount - 1] = function;

        this->subscribers = subscribers;
    }

    void emit(Data data) {
        for(int i = 0; i < subscribersCount; i++) {
            this->subscribers[i](data);
        }
    }
};

#endif
