/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:25:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/25 10:08:16 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ************************************************************************** //
//                            ScalarConverter Class                           //
// ************************************************************************** //

ScalarConverter::ScalarConverter( void )
{
		
}

ScalarConverter::ScalarConverter( const ScalarConverter& copy )
{
	(void)copy;
}

ScalarConverter& ScalarConverter::operator=( const ScalarConverter& copy )
{
	(void)copy;
	return *this;
}

ScalarConverter::~ScalarConverter( void )
{
	
}

// ************************************************************************** //
//                         Public Member Functions                            //
// ************************************************************************** //

void ScalarConverter::convert(std::string str)
{
}