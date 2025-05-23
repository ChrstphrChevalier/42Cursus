/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waziz <waziz@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/25 17:37:33 by waziz             #+#    #+#             */
/*   Updated: 2024/05/27 14:22:50 by waziz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
    private:
        const std::string   _name;
        int                 _grade;

    public:
        Bureaucrat();
        Bureaucrat(const std::string name, int G);
        Bureaucrat(const Bureaucrat& other);
        Bureaucrat&    operator=(const Bureaucrat& affect);
        ~Bureaucrat();

        void        		setGrade(int G);
        const std::string&	getName() const;
        int         		getGrade() const;

        class	GradeTooHighException : public std::exception {
			private:
				std::string	_name;
			
			public:
				GradeTooHighException(std::string n);
				const char*	what()	const throw();
				~GradeTooHighException() throw() {};
		};

        class	GradeTooLowException : public std::exception {
			private:
				std::string	_name;
	
			public:
				GradeTooLowException(std::string n);
				const char*	what()	const throw();
				~GradeTooLowException() throw() {};
		};

		void	increment();
		void	decrement();
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b);

#endif