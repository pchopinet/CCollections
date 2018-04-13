//
// Created by Pierre on 06/04/2018.
//

#include <include/ArrayList.h>

int main() {

    ArrayList a = newArrayList(3, 5);
    int b = 0, c = 5, d = 42;

    ArrayListAppend(a, &b);
    ArrayListAppend(a, &c);
    ArrayListAppend(a, &c);
    ArrayListAppend(a, &b);
    ArrayListSet(a, 2, &d);
    ArrayListDisplay(a);
    ArrayListRemoveValue(a,2);
    ArrayListDisplay(a);

    ArrayListAppend(a, &d);
    ArrayListDisplay(a);

    return 0;
}
