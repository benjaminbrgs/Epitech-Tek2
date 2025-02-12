/*
** EPITECH PROJECT, 2020
** NWP_myteams_2019
** File description:
** TODO: add description
*/

#include <uuid/uuid.h>
#include "myteams_client.h"
#include "reply_code.h"

int subscribed_cmd(client_t *info, const char *cmd)
{
    client_request_t header = {SUBSCRIBED, 0};
    char uuid[36 + 1] = {0};
    unsigned char parse_uuid[16 + 1] = {0};
    bool ret;

    if (get_arg(cmd, uuid, 36, 0)) {
        if (uuid_parse(uuid, parse_uuid) == -1) return (CLIENT_ERROR);
        header.message_size = 16;
        ret = smart_buffer_add_data(info->server_in, &header, sizeof
        (client_request_t));
        if (!ret) return (CLIENT_ERROR);
        ret = smart_buffer_add_data(info->server_in, &parse_uuid, 16);
        if (!ret) return (CLIENT_ERROR);
        return (CLIENT_SUCCESS);
    }
    if (uuid[0] != 0)
        return (CLIENT_ERROR);
    ret = smart_buffer_add_data(info->server_in, &header, sizeof
    (client_request_t));
    if (!ret) return (CLIENT_ERROR);
    return (CLIENT_SUCCESS);
}