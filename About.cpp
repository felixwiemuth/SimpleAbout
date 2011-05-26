/* Copyright (C) 2011 by Felix Wiemuth
   This code is licensed under the GNU GENERAL PUBLIC LICENSE http://www.gnu.org/licenses/gpl.txt */

#include "About.h"

using namespace std;

About::About()
{

}

string About::get_about() const
{

}

ostream& operator<<(ostream& os, const About& a)
{
    os << a.get_about();
    return os;
}
