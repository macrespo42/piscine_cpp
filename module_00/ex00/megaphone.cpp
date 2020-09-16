#include <iostream>
#include <string>

void	upperArgs(int ac, char **args)
{

	for (int i(1); i < ac; i++)
	{
		for (int j(0); j < args[i][j]; j++)
		{
			if (std::islower(args[i][j]))
				args[i][j] = std::toupper(args[i][j]);
		}
	}
}

int		main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		upperArgs(ac, av);
		for (int i(1); i < ac; i++)
			std::cout << av[i];
		std::cout << std::endl;
	}
	return 0;
}