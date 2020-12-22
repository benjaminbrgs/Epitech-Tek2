/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** TODO: add description
*/

#include "generic_list.h"
#include <stdlib.h>
#include <stddef.h>

node_t *list_create_node(void *elem)
{
    node_t *new = malloc(sizeof(node_t));

    if (!new)
        return (NULL);
    new->value = elem;
    new->next = NULL;

    return (new);
}