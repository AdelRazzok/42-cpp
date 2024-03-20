/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arazzok <arazzok@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 14:54:48 by arazzok           #+#    #+#             */
/*   Updated: 2024/03/20 14:57:09 by arazzok          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria *materias[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &other);
        ~MateriaSource();

        MateriaSource &operator=(const MateriaSource &other);

        void        learnMateria(AMateria *m);
        AMateria    *createMateria(std::string const &type);
};
