#include <stdio.h>
#include <stdlib.h>

struct stack {
  int size;
  int * values;
};

void push(struct stack *, int);
int pop(struct stack *);
int top(struct stack *);

int main(int argc, char ** argv) {
  struct stack my_stack = { 0, NULL };

  push(&my_stack, 1);
  push(&my_stack, 2);
  push(&my_stack, 3);

  int n = 0;
  for (; n < my_stack.size; ++n) {
    printf("%i, ", my_stack.values[n]);
  }
  printf("\npop():\n");

  for (int i = 0; i < n; ++i) {
    printf("top(): %i, ", top(&my_stack));
    printf("pop(): %i, ", pop(&my_stack));
    printf("top(): %i, ", top(&my_stack));
    printf("\n");
  }
  printf("\n");


  return 0;
}

void push(struct stack * s, int v) {
  s->size = s->size + 1;
  if (s->values == NULL) {
    s->values = calloc(s->size, sizeof(int));
    s->values[0] = v;
  } else {
    int * tmp = calloc(s->size, sizeof(int));

    for (int n = 0; n < s->size - 1; ++n) {
      tmp[n] = s->values[n];
    }

    tmp[s->size - 1] = v;
    free(s->values);
    s->values = tmp;
  }
}

int pop(struct stack * s) {
  if (s->values != NULL && s->size != 0) {
    s->size = s->size - 1;

    int ret = s->values[s->size];

    int * tmp = calloc(s->size, sizeof(int));

    for (int n = 0; n < s->size; ++n) {
      tmp[n] = s->values[n];
    }

    free(s->values);
    s->values = tmp;

    return ret;
  }

  return 0;
}

int top(struct stack * s) {
  if (s->values != NULL && s->size != 0) {
    return s->values[s->size - 1];
  }
  return 0;
}
