#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: A pointer to the pointer of the head of the listint_t list.
 * 
 * Return: The head node’s data (n), or 0 if the linked list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *temp;
    int data;

    /* Check if the list is empty */
    if (*head == NULL)
        return 0;

    /* Save the data of the head node */
    data = (*head)->n;

    /* Move the head pointer to the next node */
    temp = *head;
    *head = (*head)->next;

    /* Free the head node */
    free(temp);

    return data;
}
