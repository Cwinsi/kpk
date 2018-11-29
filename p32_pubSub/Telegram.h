#include "PubSub.h"
#include <functional>

#ifndef P32_PUBSUB_TELEGRAM_H
#define P32_PUBSUB_TELEGRAM_H

class Telegram: PubSub<std::function<void (int)>, int> {
public:
    Telegram(): PubSub(){

    }

    void send(){

    }


};

#endif //P32_PUBSUB_TELEGRAM_H
