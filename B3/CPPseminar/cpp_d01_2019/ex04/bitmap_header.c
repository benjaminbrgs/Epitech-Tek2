/*
** EPITECH PROJECT, 2020
** cpp_d01_2019
** File description:
** TODO: add description
*/

#include <stdio.h>
#include "bitmap.h"

void make_bmp_header(bmp_header_t *header, size_t size)
{
    #if __BYTE_ORDER__ == ORDER_LITTLE_ENDIAN
    header->magic = 0x424D;
    #else
    header->magic = 0x4D42;
    #endif

    header->size = (sizeof(bmp_header_t)) + (sizeof(bmp_info_header_t)) +
    (size * size * 4);
    header->_app1 = 0;
    header->_app2 = 0;
    header->offset = sizeof(bmp_header_t) + sizeof(bmp_info_header_t);
}

void make_bmp_info_header(bmp_info_header_t *header, size_t size)
{
    header->size = sizeof(bmp_info_header_t);
    header->width = size;
    header->height = size;
    header->planes = 1;
    header->bpp = 32;
    header->compression = 0;
    header->raw_data_size = size * size * 4;
    header->h_resolution = 0;
    header->v_resolution = 0;
    header->palette_size = 0;
    header->important_colors = 0;
}