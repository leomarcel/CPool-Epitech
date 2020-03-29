/*
** EPITECH PROJECT, 2019
** cat
** File description:
** Task01
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "libmy.h"

int cat(char *argv){
    int fd;
    int size;
    int oct = 20000;
    char buf[oct];
    int i = 0;

    fd = open(argv, O_RDONLY);

    if (fd == -1){
        my_putstr("cat: ");
        my_putstr(argv);
        my_putstr(": No such file or directory");
        return (84);
    }
    read(fd, buf, oct);
    my_putstr(buf);
    my_putchar('\n');
    close(fd);
    return (0);
}

int main(int argc, char *argv[])
{
    int i = 1;
    int fd;
    int size;
    int oct = 20000;
    char buf[oct];

/*
    if (argc <= 1){
        while (1){
            size = read(fd, buf, oct);
            buf[size] = '\0';
            if (size == 0)
                return (0);
            my_putstr(buf);
        }
    }
*/
    while (argv[i]){
        cat(argv[i]);
        i++;
    }
}
