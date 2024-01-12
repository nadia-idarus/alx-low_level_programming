#include <stdio.h>
#include <stdlib.h> // For malloc
#include "your_header_file_containing_dlistint_t_definition.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node's data.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_node;
    dlistint_t *temp = *head;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL; /* Memory allocation failed */
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->next = NULL;

    /* If the list is empty, make the new node the head */
    if (*head == NULL)
    {
        new_node->prev = NULL;
        *head = new_node;
        return new_node;
    }

    /* Traverse the list to find the last node */
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    /* Update pointers to insert the new node at the end */
    new_node->prev = temp;
    temp->next = new_node;

    return new_node;
}

