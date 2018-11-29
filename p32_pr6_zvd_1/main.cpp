#include <iostream>
#include <string>
#include "ArrayList.h"

int main() {
    ArrayList<int> arrayList(5, 0);

    arrayList.set(1, 5);
    arrayList.set(2, 10);
    arrayList.resize(10);

    ArrayList<int> arrayList1 = arrayList;
    arrayList1.set(1, 6);

    std::cout << arrayList.get(1) << " " << arrayList.get(2) << std::endl;
    std::cout << arrayList1.get(1) << " " << arrayList1.get(2) << std::endl;

    return 0;
}