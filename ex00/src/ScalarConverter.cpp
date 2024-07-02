/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:25:36 by jhouyet           #+#    #+#             */
/*   Updated: 2024/07/02 09:22:04 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>
#include <sstream>

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

void ScalarConverter::convert(const std::string &literal)
{
	double value = 0.0;
	std::istringstream iss(literal);

	if (literal == "-inff" || literal == "+inff" || literal == "nanf")
	{
		if (literal == "-inff")
		{
			value = -std::numeric_limits<float>::infinity();
		} 
		else if (literal == "+inff")
		{
			value = std::numeric_limits<float>::infinity();
		} 
		else if (literal == "nanf")
		{
			value = std::numeric_limits<float>::quiet_NaN();
		}
	} 
	else if (literal == "-inf" || literal == "+inf" || literal == "nan")
	{
		if (literal == "-inf")
		{
			value = -std::numeric_limits<double>::infinity();
		} 
		else if (literal == "+inf")
		{
			value = std::numeric_limits<double>::infinity();
		} 
		else if (literal == "nan")
		{
			value = std::numeric_limits<double>::quiet_NaN();
		}
	} 
	else if (literal.length() == 3 && literal.front() == '\'' && literal.back() == '\'')
	{
		value = static_cast<double>(literal[1]);
	} 
	else 
	{
		if (literal.back() == 'f')
		{
			iss.str(literal.substr(0, literal.length() - 1));
			float fvalue;
			iss >> fvalue;
			if (iss.fail() || !iss.eof())
			{
				std::cerr << "Invalid literal" << std::endl;
				return;
			}
			value = static_cast<double>(fvalue);
		} 
		else
		{
			iss >> value;
			if (iss.fail() || !iss.eof()) 
			{
				std::cerr << "Invalid literal" << std::endl;
				return;
			}
		}
	}

	convertToChar(value);
	convertToInt(value);
	convertToFloat(value);
	convertToDouble(value);
}

// ************************************************************************** //
//                         Private Member Functions                           //
// ************************************************************************** //

void ScalarConverter::convertToChar(double value)
{
	if (isnan(value) || isinf(value) || value < std::numeric_limits<char>::min() || value > std::numeric_limits<char>::max())
	{
		std::cout << "char: impossible" << std::endl;
	} 
	else 
	{
		char c = static_cast<char>(value);
		if (std::isprint(c)) 
		{
			std::cout << "char: '" << c << "'" << std::endl;
		} 
		else 
		{
			std::cout << "char: Non displayable" << std::endl;
		}
	}
}

void ScalarConverter::convertToInt(double value)
{
	if (isnan(value) || isinf(value) || value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
	{
		std::cout << "int: impossible" << std::endl;
	}
	else
	{
		int i = static_cast<int>(value);
		std::cout << "int: " << i << std::endl;
	}
}

void ScalarConverter::convertToFloat(double value)
{
	float f = static_cast<float>(value);
	std::cout << "float: " << f;
	if (f == static_cast<int>(f))
	{
		std::cout << ".0";
	}
	std::cout << "f" << std::endl;
}

void ScalarConverter::convertToDouble(double value)
{
	std::cout << "double: " << value;
	if (value == static_cast<int>(value))
	{
		std::cout << ".0";
	}
	std::cout << std::endl;
}