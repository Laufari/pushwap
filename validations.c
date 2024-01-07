/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laufarin <laufarin@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 20:12:37 by laufarin          #+#    #+#             */
/*   Updated: 2024/01/05 20:20:08 by laufarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// char    -> un caracter 
// char *  -> un string
// char ** -> una matrix

//"2432432"  -> verdad
//"31a3444"  -> mentira
//"2"  -> verdad
//"a"  -> mentira
//"2a" -> mentira
//" 2" -> mentira
//"-2" -> verdad
//"--2" -> mentira
// "-"

int check_string_num_not_max_or_min(char *stringnum)
{
	if(stringnum[0] == '-')
	{
		if(ft_strlen(stringnum) > 11)
			return(1);
		if(ft_strlen(stringnum) < 11)
			return(0);
		if (ft_strcmp(stringnum, "-2147483648") <= 0)
			return(0);
	}
	else
	{
		if(ft_strlen(stringnum) > 10)
			return(1);
		if(ft_strlen(stringnum) < 10)
			return(0);
		if(ft_strcmp(stringnum, "2147483647") <=  0)
			return(0);
	}
	return(1);
}

//00000
int	not_max_or_min(int argc, char **argv)
{
	int j;
	int pos;
	char *stringnum;
	
	j = 1;
	while(j < argc && argv[j])
	{
		pos = 0;
		stringnum = argv[j];
		if(ft_strlen(stringnum) > 1)
		{
			while(stringnum[pos] == '0')
				pos++;
		}
		if (check_string_num_not_max_or_min(&stringnum[pos]) == 1)
			return (1);
		j++;
	}
	return(0);
}
//Si en la posicion 0 es - y lo siguiente es un numero, de momento lo consideramos valido
//Sino ya sabemos que es una cagada
int is_the_string_a_int(char *s)
{
	int i;

	i = 0;
	if(s[0] == '\0')
		return (0);
	if(s[i] == '-')
	{
		i++;
		if(s[i] < '0' || s[i] > '9')
			return (0);

	}
	while(s[i])
	{
		//Si encuentro algo que no es mnumero
		if(s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
		i++;
	}
	//Si llego aqui significa que era un int
	return (1);

}

int are_not_daminit_enteros(int argc, char **argv)
{
	//printf("mirando si son enteros\n");
	
	int i;
	i = 1;
	while(i < argc)
	{

      //write(1, argv[i], ft_strlen(argv[i]));
      if(!is_the_string_a_int(argv[i]))
      	return (1);
      i++;
	}
	return (0); // Si todos son enteros
}

int is_there_some_dup_arg(int argc, char **argv)
{

	//primero haremos un prueba en que comparamos el primer argumeento con el resto
	char *to_compare;
	int i;
	int j;

	i = 1;
	j = 1;

    while(i < argc)
	{
		to_compare = argv[i];
		j = i + 1;
		while(j < argc)
		{
			if(ft_atoi(to_compare) == ft_atoi(argv[j]))
				return (1); //hay duplciados
			j++;
		}
		i++;
	}
	return (0); //Si no hay dupplicados
}


// • En caso de error, deberá mostrar Error seguido de un “\n” en la salida de errores estándar. Algunos de los posibles errores son: argumentos que no son enteros,
// argumentos superiores a un número entero, y/o encontrar números duplicados.
// ./push_swap 2 1 3 6 5 8
int check_arguments(int argc, char **argv)
{
	if(argc < 2)
		return (1); // Si no hay argumentos se considera todo correcto
	if(are_not_daminit_enteros(argc, argv))  //Aqui quiero probar si no son enteros
	{
		return (0); //si no son correctos
	}
	if(is_there_some_dup_arg(argc, argv))   // Aqui quiero probar que no haya duplicados
	{
		return (0); //si no son correctos
	}
	 if(not_max_or_min(argc, argv))   //Aqui quiero probar que no haya numeros que superen MAX INT o MIN INT
	 {
		return (0); //si no son correctos
	 }
	return (1); //si los argumentos son correctos
}
