/*
** EPITECH PROJECT, 2020
** PSU_strace_2019
** File description:
** TODO: add description
*/

#include <stdio.h>
#include "strace.h"

void print_long(pid_t child, unsigned long addr, struct user_regs_struct regs)
{
    (void)child;
    (void)regs;
    fprintf(stderr, "%li", (long)addr);
}