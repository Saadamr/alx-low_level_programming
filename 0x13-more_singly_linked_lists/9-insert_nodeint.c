#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the pointer of the head of the listint_t list.
 * @idx: The index of the list where the new node should be added. Index starts at 0.
 * @n: The value to be added to the new node.
 * 
 * Return: The address of the new node, or NULL if it failed.
 * If it is not possible to add the new node at index idx, do not add the new node and return NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    unsigned int i;
    listint_t *new_node, *current;

    /* Create a new node */
    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return NULL;

    new_node->n = n;

    /* If index is 0, insert at the beginning */
    if (idx == 0)
    {
        new_node->next = *head;
        *head = new_node;
        return new_node;
    }

    /* Traverse the list to the node before the specified index */
    current = *head;
    for (i = 0; current != NULL && i < idx - 1; i++)
    {
        current = current->next;
    }

    /* If index is out of bounds, free the new node and return NULL */
    if (i != idx - 1 || current == NULL)
    {
        free(new_node);
        return NULL;
    }

    /* Insert the new node at the specified index */
    new_node->next = current->next;
    current->next = new_node;

    return new_node;
}
