#ifndef P32_PR6_ZVD_1_ARRAYLIST_H
#define P32_PR6_ZVD_1_ARRAYLIST_H

template <class Type>
class ArrayList {
    Type *array;
    int size;
    Type fill;
public:
    explicit ArrayList(int size, Type fill) {
        this->array = new Type[size];
        this->size = size;
        this->fill = fill;

        for(int i = 0; i < size; i++)
            this->array[i] = fill;
    }

    ArrayList(const ArrayList &arrayList){
        this->size = arrayList.size;
        this->fill = arrayList.fill;

        this->array = new Type[size];

        for(int i = 0; i < size; i++) {
            this->array[i] = arrayList.array[i];
        }
    }

    void resize(int size) {
        Type *newArray = new Type[size];

        for(int i = 0; i < size; i++){
            if(this->size < size)
                newArray[i] = this->array[i];
            else
                newArray[i] = this->fill;
        }

        this->array = newArray;
        this->size = size;
    }

    void set(int index, Type element) {
        if(index < 0 || index >= size)
            throw "The index may be less than zero or larger than the array";

        this->array[index] = element;
    }

    Type get(int index) {
        if(index < 0 || index >= size)
            throw "The index may be less than zero or larger than the array";

        return this->array[index];
    }
};

#endif
