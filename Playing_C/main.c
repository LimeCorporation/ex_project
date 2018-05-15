#include <stdio.h>

#define swapCustom(entity, entity1) {entity ^= entity1; \
entity1 ^= entity; entity ^= entity1;}

#define reserveCustom(size, arr) {\
   for (int index = 0; index < size / 2; index++) {  \
     swapCustom(arr[size - 1 - index], arr[index]);}}

int main() {
   int numArr[] = {3, 4, 7};
   int sizeOfnumArr = sizeof(numArr) / sizeof(int);
   reserveCustom(sizeOfnumArr, numArr);
    for (int index = 0; index < sizeOfnumArr; ++index) {
        printf("%d\t", numArr[index]);
    }
}