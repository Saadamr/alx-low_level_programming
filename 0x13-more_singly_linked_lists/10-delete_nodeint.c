#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t linked list.
 * @head: A pointer to the pointer of the head of the listint_t list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 * 
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    unsigned int i;
    listint_t *current, *temp;

    if (*head == NULL)
        return -1;

    /* If index is 0, delete the first node */
    if (index == 0)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
        return 1;
    }

    /* Traverse the list to the node before the specified index */
    current = *head;
    for (i = 0; current != NULL && i < index - 1; i++)
    {
        current = current->next;
    }

    /* If index is out of bounds, return -1 */
    if (i != index - 1 || current == NULL || current->next == NULL)
    {
        return -1;
    }

    /* Delete the node at the specified index */
    temp = current->next;
    current->next = temp->next;
    free(temp);

    return 1;
}
