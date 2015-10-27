#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <assert.h>
#include "ctype.h"

int main(void) {
  char *s;

  for (s = "0123456789"; *s; s++) {
    assert(isdigit(*s));
  }

  for (s = "0123456789abcdefABCDEF"; *s; s++) {
    assert(isxdigit(*s));
  }

  for (s = "abcdefghijklmnopqrstuvwxyz"; *s; s++) {
    assert(islower(*s));
  }

  for (s = "abcdefghijklmnopqrstuvwxyz"; *s; s++) {
    assert(islower(*s));
  }

  for (s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; *s; s++) {
    assert(isupper(*s));
  }

  for (s = "!\"#$%&'()*+,-./:;<=>?@[\\]^_`{|}~"; *s; s++) {
    assert(ispunct(*s));
  }

  for (s = "\f\n\r\t\v "; *s; s++) {
    assert(isspace(*s));
  }

  for (s = "\f\n\r\t\v\a\b "; *s; s++) {
    // assert(iscntrl(*s));
  }

  for (int c = EOF; c <= UCHAR_MAX; c++) {
    if (isdigit(c)) {
      assert(isalnum(c));
    }

    if (isupper(c)) {
      assert(isalpha(c));
    }

    if (islower(c)) {
      assert(isalpha(c));
    }

    if (isalpha(c)) {
      assert(isalnum(c) && (!isdigit(c)));
    }

    if (isalnum(c)) {
      assert(isgraph(c) && (!ispunct(c)));
    }

    if (ispunct(c)) {
      assert(isgraph(c));
    }

    if (isgraph(c)) {
      assert(isprint(c));
    }

    if (isspace(c)) {
      // assert(c == ' ' || !isprint(c));
    }

    if (iscntrl(c)) {
      assert(!isprint(c));
    }
  }

  return 0;
}
