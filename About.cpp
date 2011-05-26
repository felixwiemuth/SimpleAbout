/* Copyright (C) 2011 by Felix Wiemuth
   This code is licensed under the GNU GENERAL PUBLIC LICENSE http://www.gnu.org/licenses/gpl.txt */

#include "About.h"
#include <sstream>

using namespace std;

About::About(string name, string version, string copyright, string license) : name(name), version(version), copyright(copyright), license(license)
{

}

void About::set_name(string name)
{
    this->name = name;
}
void About::set_description(string description)
{
    this->description = description;
}
void About::set_version(string version)
{
    this->version = version;
}
void About::set_copyright(string copyright)
{
    this->copyright = copyright;
}
void About::set_license(string license)
{
    this->license = license;
}

string About::get_about() const
{
    ostringstream os;
    if (!name.empty())
    {
        os << name;
        if (!version.empty())
            os << " " << version;
    }
    if (!description.empty())
        os << "\n" << description;
    if (!copyright.empty())
        os << "\n" << copyright;
    if (!license.empty())
        os << "\n" << license;

    return os.str();
}

ostream& operator<<(ostream& os, const About& a)
{
    os << a.get_about();
    return os;
}
