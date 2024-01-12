#include <stdio.h>
#include <stdlib.h> /* For malloc */
#include "your_header_file_containing_dlistint_t_definition.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node's data.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_node;

    /* Allocate memory for the new node */
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return NULL; /* Memory allocation failed */
    }

    /* Initialize the new node */
    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = *head;

    /* Update the previous pointer of the existing head, if it exists */
    if (*head != NULL)
    {
        (*head)->prev = new_node;
    }

    /* Update the head to point to the new node */
    *head = new_node;

    return new_node;
}

