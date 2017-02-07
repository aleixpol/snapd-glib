/*
 * Copyright (C) 2016 Canonical Ltd.
 *
 * This library is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free
 * Software Foundation; either version 2 or version 3 of the License.
 * See http://www.gnu.org/copyleft/lgpl.html the full text of the license.
 */

#ifndef SNAPD_SYSTEM_INFORMATION_H
#define SNAPD_SYSTEM_INFORMATION_H

#include <QtCore/QObject>
#include <Snapd/WrappedObject>

class Q_DECL_EXPORT QSnapdSystemInformation : public QSnapdWrappedObject
{
    Q_OBJECT

    Q_PROPERTY(QString osId READ osId)
    Q_PROPERTY(QString osVersion READ osVersion)
    Q_PROPERTY(QString series READ series)
    Q_PROPERTY(QString version READ version)          

public:
    explicit QSnapdSystemInformation (void *snapd_object, QObject* parent = 0);

    QString osId () const;
    QString osVersion () const;
    QString series () const;
    QString store () const;  
    QString version () const;
};

#endif
