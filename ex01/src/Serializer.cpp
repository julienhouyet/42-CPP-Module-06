/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 07:58:48 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/29 08:04:05 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

// ************************************************************************** //
//                               Serializer Class                             //
// ************************************************************************** //

Serializer::Serializer( void )
{
		
}

Serializer::Serializer( const Serializer& copy )
{
	(void)copy;
}

Serializer& Serializer::operator=( const Serializer& copy )
{
	(void)copy;
	return *this;
}

Serializer::~Serializer( void )
{
	
}