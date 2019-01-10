int		ft_strtab_len(char **arr)
{
	int	len;

	len = 0;
	if (arr)
	{
		while (*arr)
		{
			len++;
			arr++;
		}
	}
	return (len);
}
