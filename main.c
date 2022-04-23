#include <stdio.h>

int main() {

    int a = 2171239;
    int b = 1852400751;
    int c = 1663067246;
    int d = 1870226786;


    puts(&d);
//    printf("%s", &d);

    return 0;



}



































    /**
     *
     * beyo       0x6F 0x79 0x65 0x62   ->  1870226786  -> d
     * nd c       0x6E 0x64 0x20 0x63   ->  1663067246  -> c
     * odin       0x6f 0x64 0x69 0x6e   ->  1852400751  -> b
     * g!!0       0x67 0x21 0x21 0x00   ->  2171239     -> a
     *
     * */


    /**
     *
     * yoeb       0x62 0x65 0x79 0x6F   ->  1870226786  -> d
     * c dn       0x63 0x20 0x64 0x6E   ->  1663067246  -> c
     * nido       0x6e 0x69 0x64 0x6f   ->  1852400751  -> b
     * 0!!g       0x00 0x21 0x21 0x67   ->  2171239     -> a
     *
     * */