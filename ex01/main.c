#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <string.h>

void    ft_putstr(char *str);

int main(int ac, char **av)
{
    int fl;
    int i = 1;
    char c;

    if (ac == 1)
    {
        while ((i = read(0, &c, sizeof(c))) > 0)
                write(1, &c, sizeof(c));
        return (0);
    }
    while(ac > i)
    {
        fl = open(av[i], O_RDONLY);
        if (fl == -1)
            ft_putstr(strerror(errno));
        else
        {
            while (read(fl, &c, sizeof(c)) > 0)
                write(1, &c, sizeof(c));
            close(fl);
        }
        i++;
    }
    return (0);
}
