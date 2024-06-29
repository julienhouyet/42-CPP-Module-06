/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhouyet <jhouyet@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 08:00:37 by jhouyet           #+#    #+#             */
/*   Updated: 2024/06/29 10:05:02 by jhouyet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

#include <iostream>

int	main(void)
{
	Data myData = {"Angular", 18};

	uintptr_t serializedData = Serializer::serialize(&myData);

	Data *deserializedData = Serializer::deserialize(serializedData);

	std::cout << "Name: " << myData.name << ", Version: " << myData.value << std::endl;
	std::cout << "Name: " << deserializedData->name << ", Version: " << deserializedData->value << std::endl;

	return (0);
}