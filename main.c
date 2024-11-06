/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alasoare <alasoare@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:28:08 by alasoare          #+#    #+#             */
/*   Updated: 2024/11/05 09:58:16 by alasoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdio.h>  // To compare with the original printf

int	main(void)

{
	int	result_ft_print;
	int	result_orig_print;

	result_ft_print = ft_printf("Character test: %c\n", 'A');
	result_orig_print = printf("Character test: %c\n", 'A');
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("String test: %s\n", "Hello World");
	result_orig_print = printf("String test: %s\n", "Hello World");
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Pointer test: %p\n", (void *)0);
	result_orig_print = printf("Pointer test: %p\n", (void *)0);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Decimal test %%d: %d\n", 42);
	result_orig_print = printf("Decimal test %%d: %d\n", 42);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Integer test %%i: %i\n", -42);
	result_orig_print = printf("Integer test %%i: %i\n", -42);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Unsigned test: %u\n", 3000000000u);
	result_orig_print = printf("Unsigned test: %u\n", 3000000000u);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Hexadecimal test %%x: %x\n", 255);
	result_orig_print = printf("Hexadecimal test %%x: %x\n", 255);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Hexadecimal test %%X: %X\n", 255);
	result_orig_print = printf("Hexadecimal test %%X: %X\n", 255);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Percentage test: %%\n");
	result_orig_print = printf("Percentage test: %%\n");
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Zero test: %d\n", 0);
	result_orig_print = printf("Zero test: %d\n", 0);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Smallest int test: %d\n", -2147483648);
	result_orig_print = printf("Smallest int test: %d\n", (int)-2147483648);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Empty string test: %s\n", "");
	result_orig_print = printf("Empty string test: %s\n", "");
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("NULL pointer test: %p\n", NULL);
	result_orig_print = printf("NULL pointer test: %p\n", NULL);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Multiple: %d, %s, %c, %x\n", 42, "Hello", 'B', 255);
	result_orig_print = printf("Multiple: %d, %s, %c, %x\n", 42, "Hello", 'B', 255);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Largest unsigned int: %u\n", 4294967295u);
	result_orig_print = printf("Largest unsigned int: %u\n", 4294967295u);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Largest int: %d\n", 2147483647);
	result_orig_print = printf("Largest int: %d\n", 2147483647);
	printf("ft_printf size: %d, printf size: %d\n", result_ft_print, result_orig_print);

	printf("\n=== Combinações Complexas ===\n");

	result_ft_print = ft_printf("Mixed: %d, %s, %c, %x, %u, %p, %%\n", 123, "test", 'Z', 456, 789u, (void *)0x42);
	result_orig_print = printf("Mixed: %d, %s, %c, %x, %u, %p, %%\n", 123, "test", 'Z', 456, 789u, (void *)0x42);
	printf("ft_printf size: %d, printf size: %d\n\n", result_ft_print, result_orig_print);

	printf("\n=== Sequência de Conversões Idênticas ===\n");

	result_ft_print = ft_printf("Repeated int: %d %d %d %d\n", 1, -1, 2147483647, -2147483648);
	result_orig_print = printf("Repeated int: %d %d %d %d\n", 1, -1, 2147483647, (int)-2147483648);
	printf("ft_printf size: %d, printf size: %d\n\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Repeated char: %c %c %c %c\n", 'A', 'B', 'C', 'D');
	result_orig_print = printf("Repeated char: %c %c %c %c\n", 'A', 'B', 'C', 'D');
	printf("ft_printf size: %d, printf size: %d\n\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Repeated pointer: %p %p %p %p\n", (void *)0, (void *)0x1, (void *)0xFFFF, (void *)0xFFFFFFFF);
	result_orig_print = printf("Repeated pointer: %p %p %p %p\n", (void *)0, (void *)0x1, (void *)0xFFFF, (void *)0xFFFFFFFF);
	printf("ft_printf size: %d, printf size: %d\n\n", result_ft_print, result_orig_print);

	printf("\n=== Casos Extremos ===\n");

	result_ft_print = ft_printf("Extreme unsigned int: %u %u %u\n", 0u, 1u, 4294967295u);
	result_orig_print = printf("Extreme unsigned int: %u %u %u\n", 0u, 1u, 4294967295u);
	printf("ft_printf size: %d, printf size: %d\n\n", result_ft_print, result_orig_print);

	result_ft_print = ft_printf("Extreme int: %d %d %d\n", -2147483648, 0, 2147483647);
	result_orig_print = printf("Extreme int: %d %d %d\n",(int) -2147483648, 0, 2147483647);
	printf("ft_printf size: %d, printf size: %d\n\n", result_ft_print, result_orig_print);

	printf("=== Testes completos para o ft_printf ===\n");

	return (0);
}

