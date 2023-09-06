#ifndef FT_PRINTF_H
#define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

void	ft_putaddr(void *ptr);
void	ft_putnbr(int nb);
void	ft_putnbr_u(unsigned int nb);
void	ft_putnbr_base(unsigned int nb, char xX);
void	ft_putnbr_base_addr(unsigned long nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);
int		ft_printf(const char *format, ...);


#endif