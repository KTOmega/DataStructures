typedef struct Node Node;

struct Node {
	Node *next;
	int val;
};

typedef struct LinkedList {
	int elems;
	Node *head;
	Node *tail;
} LinkedList;

void linked_list_add(LinkedList *list, int val);
int linked_list_remove(LinkedList *list, int index);
int linked_list_get(LinkedList *list, int index);