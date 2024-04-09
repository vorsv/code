#include <stdio.h>
#include "mylib.h"

int main() {
    int result = adde(5, 3);
    say_helle("World");
    printf("The sum is: %d\n", result);
    return 0;
}
/*

 ╭─vorsv@vorsv in repo: code/yproject/libraryex on  main [!?] via C v13.2.1-gcc took 51ms
 ╰─λ gcc -c main.c

 ╭─vorsv@vorsv in repo: code/yproject/libraryex on  main [!?] via C v13.2.1-gcc took 63ms
 ╰─λ gcc -c mylib.c

 ╭─vorsv@vorsv in repo: code/yproject/libraryex on  main [!?] via C v13.2.1-gcc took 67ms
 ╰─λ gcc main.o mylib.o -o nig

*/