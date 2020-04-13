#include <unistd.h>

void	ft_putchar (int c)
{
	write(1, &c, 1);
}		

void 	ft_print_alphabet_with_write (void)
{
	char letter;


	letter = 'a';

	while (letter <= 'z')
	{
		write(1, &letter, 1);
		letter = letter + 1;
	}
	write(1, "\n", 1);
}

void	ft_print_alphabet_with_putchar (void)
{
	char letter;


	letter = 'a';

	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
	write(1, "\n", 1);
}

int	main (void)
{
	ft_print_alphabet_with_write();
	ft_print_alphabet_with_putchar();
	return (0);
}

