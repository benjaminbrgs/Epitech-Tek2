/*
** EPITECH PROJECT, 2020
** NWP_myteams_2019
** File description:
** TODO: add description
*/

#include "myteams_client.h"
#include "logging_client.h"

int reply_560(client_t *info, server_reply_t *header)
{
    (void)info;
    (void)header;
    client_error_unauthorized();
    return (CLIENT_SUCCESS);
}