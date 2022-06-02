
#include <cassert>


int main() {
    //BOOLEANOS
    assert(true);
    assert(not false);
    assert(not true);
    assert(true or false);

    //CHARACTERS
    assert('a' != 'b');
    assert(' ' + ' ' == '@');
    assert('P'-'A'== 45-30);
    assert(' '== 16*2);

    //enteros
       assert(100 == 100);
       assert(123 != 34);

    //pto flotante  (Reales) (float) (double) (long double)
        assert(0.2<1);
}
