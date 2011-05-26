/* Copyright (C) 2011 by Felix Wiemuth
   This code is licensed under the GNU GENERAL PUBLIC LICENSE http://www.gnu.org/licenses/gpl.txt */

#ifndef ABOUT_H_INCLUDED
#define ABOUT_H_INCLUDED

#include <string>

class About
{
    public:
        About();
    private:
        std::string program_name;
        std::string program_description;
        std::string version;
        std::string copyright;
        std::string license;
    public:
        std::string get_about() const;
        friend std::ostream& operator<<(std::ostream& os, const About& a);
};


#endif // ABOUT_H_INCLUDED
