/*
** EPITECH PROJECT, 2018
** PROJECT
** File description:
** redirect unit test
*/

#include "unittest.hpp"

Test(Woody, creation, .init=redirect_all_std)
{
    Woody test("Benjamin", "./sample/woody.txt");
    cr_assert_eq(test.getName(), "Benjamin");
    cr_assert_eq(test.getType(), Toy::WOODY);
}