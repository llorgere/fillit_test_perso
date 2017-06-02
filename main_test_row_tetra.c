#include <stdlib.h>
#include <stdio.h>

char	**ft_row_tetra(char	*file);

int		main(void)
{
	char	*str= "...#\n...#\n...#\n...#\n";
	int		i;
	char	**tab;

	i = 0;
	tab = ft_row_tetra(str);
	while (i < 4)
	{
		printf("%d : [%s]\n", i, tab[i]);
		i++;
	}
	return(0);
}
