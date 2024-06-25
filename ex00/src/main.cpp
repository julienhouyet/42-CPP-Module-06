/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:26:31 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/25 09:48:52 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        std::cout << "ScalarConverter : " << argv[1] << std::endl;
    }
    else
    {
        std::cout << "Bad arguments." << std::endl;
    }
    return (0);
}