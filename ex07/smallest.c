#include <stdio.h>
#include <stdlib.h>
int main (int ac, char **av){
    if (ac > 2){
        if (atoi(av[1]) < atoi(av[2]))
            printf("%s %s", av[1], av[2]);
        else
            printf("%s %s", av[2], av[1]);
            
    }
    return 0;
}