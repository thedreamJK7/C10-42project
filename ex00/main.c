#include <unistd.h>
#include <fcntl.h>

void    ft_putstr(char *str);

int main(int ac, char **av)
{
    int fl;
    char c;

    if (ac == 2)
    {
        fl = open(av[1], O_RDONLY);
        if (fl == -1)
            ft_putstr("Cannot read file.");
        else
        {
            while (read(fl, &c, sizeof(c)) > 0)
                write(1, &c, sizeof(c));
        }
        close(fl);
    }
    else if (ac > 2)
    {
        ft_putstr("Too many arguments.");
    }
    else
    {
        ft_putstr("File name is missing.");
    }
    return (0);
}