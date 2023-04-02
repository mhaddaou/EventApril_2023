#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int blackjack(char * inp){
  int point = 0;
  int ace = 0;
  for (int i = 0; inp[i]; i++){
    if (inp[i] > 49 && inp[i] <= 58){
      point += inp[i] - 48;
    }
    else if (inp[i] == 'A'){
      point += 11;
      ace++;
    }
    else
      point += 10;
  }
  while (ace > 0 && point > 21){
    point -= 10;
    ace--;
  }
  return point;
}

int check(char *inp){
  for (int i = 0; inp[i]; i++){
    if (inp[i] < 50 || inp[i] >58)
      if (inp[i] != 'T')
        if (inp[i] != 'J')
          if (inp[i] != 'D')
            if (inp[i] != 'K')
              if (inp[i] != 'A')
                return (EXIT_FAILURE);
  }
  return (EXIT_SUCCESS);
}

int main (int ac, char **av){
  if (ac == 2){
    if (check(av[1]) == EXIT_FAILURE){
      printf("error");
      return EXIT_FAILURE;
    }
    int ret = blackjack(av[1]);
    if ( ret < 22){
      printf("Blackjack!");
    }
    else
      printf("%d", ret);
  }
  return 0;
}