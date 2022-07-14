#ifndef LISTS_H
#define LISTS_H
/**
 * struct lists_s - singly linked list
 * @str: string
 * @len: length of the string
 * @next: point to the following node
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
}
list_t;

size_t print_list(const list_t *h);

#endif
