#include "liste_s_c.h"

int main() {

    int a;
    a = 8;
    int *p;
    p = &a;
    *p = 3;
    printf("%d\n",a);
    return 0;

}
