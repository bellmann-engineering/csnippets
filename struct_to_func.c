#include <stdio.h>

struct rechteck {
  int a;
  int b;
};

int umfang(struct rechteck * rp) {
  return rp->a + rp->b;
  // Adresse von rp->a ist 0
  // Adresse von rp->b ist die Adresse von rp->a + sizeof(rp->a)
  // Adresse von rp->b ist 4
}

int main(int argc, char ** argv) {
  return 0;
}
