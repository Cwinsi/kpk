#include <iostream>
#include <vector>

class Array{
private:
    int *items;
    int lengths;
public:
    explicit Array(int lengths) {
        items = new int[lengths];
        this->lengths = lengths;

        for(int i = 0; i < lengths; i++)
            items[i] = 0;
    }

    Array(Array &obj) {
        items = new int[obj.lengths];
        lengths = obj.lengths;

        for(int i = 0; i < lengths; i++)
            items[i] = obj.get(i);
    }

    void put(int index, int value){
         items[index] = value;
    }

    int get(int index){
        return items[index];
    }

    int length() {
        return lengths;
    }

    void display() {
        for(int i = 0; i < length(); i++){
            std::cout << get(i) << ", ";
        }
        std::cout << std::endl;
    }

    ~Array(){
        delete[] items;
    }
};


int main() {
    Array array(10);

    for(int i = 0; i < array.length(); i++){
        array.put(i, i*2);
    }
    array.display();

    Array array2 = array;
    array.put(1, 555);
    array2.display();

    return 0;
}