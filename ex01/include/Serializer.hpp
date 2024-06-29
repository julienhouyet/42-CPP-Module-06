/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 07:58:50 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/29 08:06:20 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SERIALIZER_HPP__
#define __SERIALIZER_HPP__

#include "Data.hpp"
#include <cstdint>

// ************************************************************************** //
//                               Serializer Class                             //
// ************************************************************************** //

class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:
		Serializer( void );
		Serializer( const Serializer& copy );
		Serializer& operator=( const Serializer& copy );
		~Serializer( void );
};

#endif