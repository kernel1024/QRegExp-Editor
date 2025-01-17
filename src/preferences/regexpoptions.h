/*
 * Copyright (C) 2011-2012 Luís Pereira <luis.artur.pereira@gmail.com>
 *
 * This file is part of QRegExp-Editor.
 *
 * QRegExp-Editor is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * QRegExp-Editor is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with QRegExp-Editor. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef REGEXPOPTIONS_H
#define REGEXPOPTIONS_H

#include <QColor>
#include <QDebug>
#include "patternfilter.h"

struct RegexpOptions {
    bool showTabsAndSpaces;
    bool showNewlines;
    bool showParenthesesMatch;
    PatternFilter::Filters filters;
    QColor highlightMatchColor;

    RegexpOptions();
    bool equals(const RegexpOptions &) const;
};

inline bool operator==(const RegexpOptions &p1, const RegexpOptions &p2)
{
    return p1.equals(p2);
}

inline bool operator!=(const RegexpOptions &p1, const RegexpOptions &p2)
{
    return !p1.equals(p2);
}

QDebug operator<<(QDebug dbg, const RegexpOptions &p);

#endif // REGEXPOPTIONS_H
