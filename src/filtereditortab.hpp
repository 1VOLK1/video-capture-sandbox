/* videocapture is a tool with no special purpose
 *
 * Copyright (C) 2009 Ronny Brendel <ronnybrendel@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>
 */

#ifndef FILTER_EDITOR_TAB_HPP
#define FILTER_EDITOR_TAB_HPP


#include "prereqs.hpp"

#include "basefilter.hpp"

#include <QWidget>

#include <set>
#include <utility>


class FilterEditorTab : public QWidget
{
    Q_OBJECT
public:
    FilterEditorTab(QWidget *parent, const std::set<std::pair<CreateFilterFunction, DestroyFilterFunction> > &filters);
};


#endif /* FILTER_EDITOR_TAB_HPP */

