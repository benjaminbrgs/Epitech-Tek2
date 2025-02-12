/*
** EPITECH PROJECT, 2020
** cpp_d02a_2019
** File description:
** TODO: add description
*/

#include "generic_list.h"
#include <stddef.h>

node_t *list_create_node(void *elem);

bool list_add_elem_at_back(list_t *front_ptr, void *elem)
{
    node_t *new = list_create_node(elem);
    node_t *temp = NULL;

    if (!new) return (false);
    if (list_is_empty(*front_ptr)) {
        *front_ptr = new;
        return (true);
    }
    for (temp = *front_ptr; temp->next; temp = temp->next);
    temp->next = new;
    return (true);
}