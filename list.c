#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct List 
{
    int id;
    char name[32];
    struct List *next;
} List;

struct List* addToList(int, char*);

int main()
{
    struct List *start, *node;
    start = addToList(1, "Kai");
    start->next = addToList(2, "Oliver");
    start->next->next = addToList(3, "Sven"); 

    node = start; 

    while(node != NULL)
	{
        printf("id = %d\n", node->id);
        printf("name = %s\n", node->name);
        node = node->next;
    }

    while(start != NULL)
	{ 
        node = start;
        start = node->next;
        free(node);
    }
    return 0;
}

struct List* addToList(int id, char* name)
{
    List* list;
    list = (List*)malloc(sizeof(List));
    list->id = id;             /*set id*/
    strcpy(list->name, name);  /*set name*/
    list->next = NULL;         /*set next, point to NULL*/
    return list;
}