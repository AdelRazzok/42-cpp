/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 14:35:30 by arazzok           #+#    #+#             */
/*   Updated: 2024/06/04 15:07:08 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
    Data data;
	uintptr_t raw = Serializer::serialize(&data);
	Data *ptr = Serializer::deserialize(raw);

	data.id = 123;
	data.name = "Kobe";
	data.balance = 42.42f;

	std::cout << "&data: " << std::hex << &data << std::endl;
	std::cout << "raw: 0x" << raw << std::endl;
	std::cout << "ptr: " << ptr << std::dec << std::endl;

    std::cout << std::endl;

	std::cout << "data.id: " << data.id << ", data.name: " << data.name << ", data.balance: " << data.balance << std::endl;
	std::cout << "ptr->id: " << ptr->id << ", ptr->name: " << ptr->name << ", ptr->balance: " << ptr->balance << std::endl;

    return 0;
}
