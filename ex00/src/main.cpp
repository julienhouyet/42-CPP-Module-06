/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:26:31 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/29 07:47:23 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
		ScalarConverter::convert(argv[1]);
    }
    else
    {
        std::cout << "Bad arguments." << std::endl;
    }
    return (0);
}