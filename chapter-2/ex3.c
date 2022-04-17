#include "../include/xinu.h"

void sndch(char);

void main(void) {
  resume( create(sndch, 1024, 20, "send A", 1, 'A') );
  sndch('B');
}

void sndch(char ch) {
  while (1) {
    putc(CONSOLE, ch);
  }
}
