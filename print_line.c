#include <unistd.h>

int	ft_strlen(char *s)

{
	int len;


	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}

void	ft_putchar(int c)

{
	write(1, &c, 1);
}

void	ft_putstr(char *s)

{
	int i;


	i = 0;
	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
	}
}

void	ft_putendl(char *s)

{
	ft_putstr(s);
	write(1, "\n", 1);
}

int	main(void)

{
	ft_putendl("This string has a nawline sumbol at the end (;");
	ft_putstr("And this line ands here!");
	return(0);
}
