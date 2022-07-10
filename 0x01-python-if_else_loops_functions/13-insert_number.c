#include "lists.h"
/**
 * insert_node - Function that inserts a number in a list
 * @head: head of the linked list
 * @number: number to be insert
 * Return: new node address or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *temp = NULL, *nuevo = NULL;
	temp = *head;
	nuevo = malloc(sizeof(listint_t));
	if (nuevo == NULL)
		return (NULL);
	nuevo->n = number;
	if (!*head)
	{
		*head = nuevo;
		nuevo->next = NULL;
		return (nuevo);
	}
	if (number < temp->n)
	{
		nuevo->next = *head;
		*head = nuevo;
		return (nuevo);
	}
	while (temp)
	{
		if (temp->next == NULL)
		{
			nuevo->next = NULL;
			temp->next = nuevo;
			return (nuevo);
		}
		if (temp->n < number && number <= temp->next->n)
		{
			nuevo->next = temporal->next;
			temp->next = nuevo;
			return (nuevo);
		}
		temp = temp->next;
	}
	return (NULL);
}
