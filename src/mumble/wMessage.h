/*
   Whisper is a Mumble based voice client for OpenSim
   Copyright (C) 2009-2010  Volker Gaessler <volker.gaessler@vcomm.ch>

   This file is part of Whisper.

   Whisper is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program. If not, see <http://www.gnu.org/licenses/>
*/

#ifndef WMESSAGE_H
#define WMESSAGE_H

#include <QtCore/QString>

namespace whisper {

    class Message {
    public:
        QByteArray& getSendData();
        void setSendData(QByteArray& rsData);

    protected:
        QByteArray sData;
    };
}

#endif // WMESSAGE_H
