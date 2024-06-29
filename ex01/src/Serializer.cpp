/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 07:58:48 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/29 09:47:36 by jhouyet          ###   ########.fr       */
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

// ************************************************************************** //
//                         Public Member Functions                            //
// ************************************************************************** //

uintptr_t Serializer::serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
}