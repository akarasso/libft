int		ft_strtab_len(char **tab)
{
	int	len;

	len = 0;
	if (tab)
	{
		while (*tab)
		{
			len++;
			tab++;
		}
	}
	return (len);
}
