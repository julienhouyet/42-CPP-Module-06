/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 11:25:34 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/24 11:32:36 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SCALAR_CONVERTER_HPP__
#define __SCALAR_CONVERTER_HPP__



// ************************************************************************** //
//                           Scalar Converter Class                           //
// ************************************************************************** //

class ScalarConverter
{
	public:
		ScalarConverter( void );
		ScalarConverter( const ScalarConverter& copy );
		ScalarConverter& operator=( const ScalarConverter& copy );
		~ScalarConverter( void );

		static void	convert(std::string	nb);

	private:
};

#endif