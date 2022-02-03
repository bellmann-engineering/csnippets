#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct List 
{
    int id; 
    char name[50]; // Datenspeicher
    struct List* next; // zeigt aufs nächste 
} List;

List* addToList(int, char*);

int main()
{
    List* start = NULL;
	List* node = NULL;
	
    start = addToList(1, "Kai"); // next zeigt auf null
    start->next = addToList(2, "Oliver"); // next zeigt auf oliver element
    start->next->next = addToList(3, "Sven"); 
	// ^    ^    ^
	// Kai  Oli  Sven
	
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
        free(node); // freigegeben
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
