/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:25:46 by arazzok           #+#    #+#             */
/*   Updated: 2024/05/23 14:16:44 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _target("default")
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other), _target(other._target)
{
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	if (this != &other)
	{
		AForm::operator=(other);
		this->_target = other._target;
	}
	return (*this);
}

void    ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	if (executor.getGrade() > this->getReqGradeToExecute())
		throw GradeTooLowException();
	if (!this->getIsSigned())
		throw FormNotSignedException();

	std::string filename = this->_target + "_shrubbery";
	std::ofstream file(filename.c_str());
	if (file.is_open())
	{
		file << "             .o00o\n"
				"           o000000oo\n"
				"          00000000000o\n"
				"         00000000000000\n"
				"      oooooo  00000000  o88o\n"
				"   ooOOOOOOOoo  ```''  888888\n"
				"  OOOOOOOOOOOO'.qQQQQq. `8888'\n"
				" oOOOOOOOOOO'.QQQQQQQQQQ/.88'\n"
				"OOOOOOOOOO'.QQQQQQQQQQ/ /q\n"
				" OOOOOOOOO QQQQQQQQQQ/ /QQ\n"
				"   OOOOOOOOO `QQQQQQ/ /QQ'\n"
				"     OO:F_P:O `QQQ/  /Q'\n"
				"        \\. \\ |  // |\n"
				"        d\\ \\\\|_////\n"
				"        qP| \\ _' `|Ob\n"
				"           \\  / \\  \\Op\n"
				"           |  | O| |\n"
				"   _       /\\. \\_/ /\\\n"
				"  `---__/|_\\\\   //|  __\n"
				"        `-'  `-'`-'-'\n";
		file.close();
	}
	else
		throw std::runtime_error("Error: could not open file");
}
