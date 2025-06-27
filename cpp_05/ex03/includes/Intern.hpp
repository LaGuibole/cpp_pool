/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guphilip <guphilip@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/26 19:05:47 by guillaumeph       #+#    #+#             */
/*   Updated: 2025/06/27 13:44:19 by guphilip         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern{
    protected:
        typedef AForm* (*FormConstructor)(const std::string&);

        struct FormArray
        {
            std::string formName;
            FormConstructor constructor;
        };
        static AForm* createShrubbery(const std::string& target);
        static AForm* createPardon(const std::string& target);
        static AForm* createRobotomy(const std::string& target);
    public:
        Intern();
        Intern(const Intern& copy);
        Intern& operator=(const Intern& other);
        ~Intern();

        AForm* makeForm(const std::string& name, const std::string& target);
};
