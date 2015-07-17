/*
    Copyright (C) 2015  P.L. Lucas <selairi@gmail.com>

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/

#ifndef _SCREEN_LISTENER_H_
#define _SCREEN_LISTENER_H_


#include <KScreen/Config>
#include <KScreen/Output>
#include <KScreen/ConfigMonitor>

class ScreenListener : public QObject
{
    Q_OBJECT

public:
    ScreenListener(QObject* parent = 0);

public Q_SLOTS:
    void configurationChanged();

private:
    void init();

    //KScreen::ConfigPtr config;
    KScreen::ConfigMonitor *configMonitor;
};

#endif // _SCREEN_LISTENER_H_ 


