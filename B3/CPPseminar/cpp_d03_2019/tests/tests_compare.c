/*
** EPITECH PROJECT, 2020
** cpp_d03_2019
** File description:
** TODO: add description
*/

#include "unittest.h"
#include "../string.h"

Test(string_compare_c, test_00)
{
    string_t s;
    string_init(&s, "Hello World");
    cr_assert_eq(compare_c(&s, "Hello World"), strcmp(s.str, "Hello World"));
    string_destroy(&s);
}