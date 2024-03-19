/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:38:11 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/05 18:11:23 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

static bool _is_fs_open(const char *filename, std::ifstream &ifs, std::ofstream &ofs)
{
    std::string fname(filename);

    ifs.open(fname.c_str());
    if (!ifs.is_open()) {
        std::cerr << "error: cannot open file '" << fname << "'" << std::endl;
        return false;
    }

    fname += ".replace";
    ofs.open(fname.c_str());
    if (!ofs.is_open()) {
        std::cerr << "error: cannot open file '" << fname << "'" << std::endl;
        return false;
    }
    return true;
}

static void _replace(const char *s1, const char *s2, std::ifstream &ifs, std::ofstream &ofs)
{
    std::string src(s1);
    std::string dest(s2);
    std::string line;
    std::string new_line;
    std::size_t pos = 0;

    while (std::getline(ifs, line)) {
        new_line = "";
        while (pos < line.length()) {
            if (line.substr(pos, src.length()) == src) {
                new_line += dest;
                pos += src.length();
            } else {
                new_line += line[pos];
                pos++;
            }
        }
        ofs << new_line << std::endl;
        pos = 0;
    }
}

int	main(int argc, char **argv)
{
    std::ifstream   ifs;
    std::ofstream   ofs;

	if (argc != 4) {
		std::cerr << "error: invalid number of arguments" << std::endl;
		return (1);
	}
    if (!_is_fs_open(argv[1], ifs, ofs)) {
        return (1);
    }
    _replace(argv[2], argv[3], ifs, ofs);
    ifs.close();
    ofs.close();
    return (0);
}
