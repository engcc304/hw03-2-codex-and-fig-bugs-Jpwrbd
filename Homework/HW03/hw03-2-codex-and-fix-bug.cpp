#include <stdio.h>

int main() {
    float a, b = 3 ;
    bool _1 = 0 ;
    printf( "%d " , _1) ;

    int i = 0 ;
    if (_1 != 0) {
        printf( "ok " ) ;
    } else {
        while (i <= 5) {
            printf( " not-okay-%d " , ++i) ;
        }

        for (i = 3; i < 10; i += 1) {
            if (i % 2 == (!1 ? 1 : 2)) {
                printf( "see see" ) ;
            }
        }
    }
    return 0 ;
}
/*not-okey-1  not-okey-2  not-okey-3  not-okey-4  not-okey-5  not-okey-6 haha
not-okay-1  not-okay-2  not-okay-3  not-okay-4  not-okay-5  not-okay-6 see seehahasee seehahasee seehahasee see*/
