void	ft_strtab_cpy(char **src, char **dest)
{
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
}