#include <stdio.h>

struct rechteck 
{
  int a;
  int b;
};

int umfang(struct rechteck*);

int main(int argc, char ** argv) {
  struct rechteck r;
  r.a = 21;
  r.b = 30;
  printf("Umfang: %d\n", umfang(&r));
  
  return 0;
}

int umfang(struct rechteck* rp) 
{
  return rp->a + rp->b;
  // Adresse von rp->a ist 0
  // Adresse von rp->b ist die Adresse von rp->a + sizeof(rp->a)
  // Adresse von rp->b ist 4
}
