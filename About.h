/* Copyright (C) 2011 by Felix Wiemuth
   This code is licensed under the GNU GENERAL PUBLIC LICENSE http://www.gnu.org/licenses/gpl.txt */

#ifndef ABOUT_H_INCLUDED
#define ABOUT_H_INCLUDED

#include <string>

class About
{
    public:
        About(std::string name, std::string version="", std::string copyright="", std::string license="");
    private:
        std::string name;
        std::string description;
        std::string version;
        std::string copyright;
        std::string license;
    public:
        //set methods
        void set_name(std::string name);
        void set_description(std::string description);
        void set_version(std::string version);
        void set_copyright(std::string copyright);
        void set_license(std::string license);

        std::string get_about() const;
        friend std::ostream& operator<<(std::ostream& os, const About& a);
};


#endif // ABOUT_H_INCLUDED
