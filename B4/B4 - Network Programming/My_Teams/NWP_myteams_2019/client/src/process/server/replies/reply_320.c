/*
** EPITECH PROJECT, 2020
** NWP_myteams_2019
** File description:
** TODO: add description
*/

#include <uuid/uuid.h>
#include "myteams_client.h"
#include "logging_client.h"

int reply_320(client_t *info, server_reply_t *header)
{
    unsigned char team_uuid[16 + 1] = {0};
    char team_unparse_uuid[36 + 1] = {0};
    unsigned char thread_uuid[16 + 1] = {0};
    char thread_unparse_uuid[36 + 1] = {0};
    unsigned char user_uuid[16 + 1] = {0};
    char user_unparse_uuid[36 + 1] = {0};
    char message[512 + 1] = {0};
    (void)header;
    if (!smart_buffer_get_data(info->server_out, &team_uuid, 16)
        || !smart_buffer_get_data(info->server_out, &thread_uuid, 16)
        || !smart_buffer_get_data(info->server_out, &user_uuid, 16)
        || !smart_buffer_get_data(info->server_out, &message, 512))
        return (CLIENT_ERROR);
    uuid_unparse(team_uuid, team_unparse_uuid);
    uuid_unparse(thread_uuid, thread_unparse_uuid);
    uuid_unparse(user_uuid, user_unparse_uuid);
    client_event_thread_message_received(team_unparse_uuid, thread_unparse_uuid,
    user_unparse_uuid, message);
    return (CLIENT_SUCCESS);
}