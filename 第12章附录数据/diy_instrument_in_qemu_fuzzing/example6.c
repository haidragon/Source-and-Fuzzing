

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define random(x) (rand()%x)


int foo1(int b) {
    printf("foo1 !!\n");

    if (b==1) {
        ;
    } else {
        foo2(b);
    }

    return 0;
}

int foo2(int b) {
    printf("foo1 !!\n");

    if (b==1) {
        ;
    } else if (b==3) {
        ;
    } else {
        foo3(b);
    }

    return 0;
}

int foo3(int b) {
    printf("foo1 !!\n");

    if (b==1) {
        ;
    } else if (b==3) {
        ;
    } else if (b==4) {
        ;
    } else {
        foo4(b);
    }

    return 0;
}

int foo4(int b) {
    printf("foo1 !!\n");

    if (b==2) {
        foo5(1);
    } else if (b==4) {
        ;
    } else if (b==6) {
        ;
    } else if (b==5) {
        ;
    } else if (b==1) {
        ;
    }

    return 0;
}

int foo5(int b) {
    return 1;
}


int main(int argc,char** argv) {
    printf("main running !!!\n");

    for (int index = 1;index < argc;++index) {
        __sanitizer_enter();
        foo1(atoi(argv[index]));
        __sanitizer_exit();
    }

    printf("main exit !!\n");

    return 1;
}



