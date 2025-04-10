/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaContainer.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junkwak <junkwak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 14:37:57 by sejjeong          #+#    #+#             */
/*   Updated: 2025/04/10 13:57:09 by junkwak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "AMateria.hpp"
#define CONTAINER_SIZE (4)

class MateriaContainer
{

public:
    MateriaContainer();
    MateriaContainer(const MateriaContainer& other);
    MateriaContainer& operator=(const MateriaContainer& rhs);
    ~MateriaContainer();
    AMateria* getMateria(int index);
    AMateria* getMateria(const std::string type);
    bool add(AMateria* m);
    AMateria* remove(int idx);
    void initMateriaContainer();
    void clearMateriaContainer();
private:
    AMateria* mMateriaContainer[CONTAINER_SIZE];
};