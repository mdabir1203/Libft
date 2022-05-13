/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabbas <mabbas@student.wolfsburg42.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 23:34:48 by mabbas            #+#    #+#             */
/*   Updated: 2022/05/12 23:36:27 by mabbas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/* int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        return (0);
    }
    else
    {
        int i =1;
        char result;
        while(i < argc)
        {
            result = ft_strlen(argv[i]);
            i++;

        }
          // It takes input from the file directly

        printf("Length of the string is: %d", result);
    }
} */