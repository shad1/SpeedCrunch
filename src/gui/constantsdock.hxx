/* This file is part of the SpeedCrunch project
   Copyright (C) 2007 Ariya Hidayat <ariya@kde.org>

   This program is free software; you can redistribute it and/or
   modify it under the terms of the GNU General Public License
   as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; see the file COPYING.  If not, write to
   the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.
 */

#ifndef CONSTANTSDOCK
#define CONSTANTSDOCK

#include <QDockWidget>

class ConstantsDockPrivate;
class QTreeWidgetItem;
class Constants;

class ConstantsDock : public QDockWidget
{
  Q_OBJECT

  public:
    explicit ConstantsDock( QWidget* parent );
    ~ConstantsDock();

    void update( const Constants* constants );

  signals:
    void constantSelected( const QString& c );

  protected slots:
    void triggerFilter();
    void filter();
    void handleItem( QTreeWidgetItem* item );

  private:
    ConstantsDockPrivate*d;
};

#endif // CONSTANTSDOCK