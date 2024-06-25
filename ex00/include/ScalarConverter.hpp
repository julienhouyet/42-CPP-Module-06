/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:25:34 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/25 11:15:33 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCALAR_CONVERTER_HPP__
#define __SCALAR_CONVERTER_HPP__

#include <iostream>

// ************************************************************************** //
//                            ScalarConverter Class                           //
// ************************************************************************** //

class ScalarConverter
{
	public:
		static void	convert(const std::string& literal);

	private:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& copy );
		ScalarConverter& operator=( const ScalarConverter& copy );
		~ScalarConverter( void );
};

#endif