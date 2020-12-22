/*
** EPITECH PROJECT, 2020
** bootstrap
** File description:
** TODO: add description
*/

#include <fcntl.h>
#include <stdio.h>
#include <elf.h>
#include <sys/mman.h>
#include <sys/stat.h>

int main (int ac , char ** av )
{
    int fd ;
    void * buf ;
    struct stat s ;
    Elf64_Ehdr * elf ;
    fd = open (av[1] , O_RDONLY ) ;
    if ( fd != -1)
    {
        fstat ( fd , & s ) ;
        buf = mmap ( NULL , s . st_size , PROT_READ , MAP_PRIVATE , fd , 0) ;
        if ( buf != -1)
        {
            printf (" mmap (%s) : %08x\n", av [1] , buf );
            elf = buf;
            printf (" Section Header Table : addr = %08x , nb = %dn", elf->e_shoff, elf->e_shnum);
        }
        else
        {
            perror (" mmap ");
        }
        close (fd);
    }
}