/*
 * Copyright (C) 2016-2018 Vladimir Kuznetsov <smithcoder@yandex.ru> https://smithcoder.ru/
 *
 * This file is part of the Smitto.
 *
 * Smitto is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation;
 * either version 3 of the License, or (at your option) any later version.
 *
 * Smitto is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Smitto; see the file LICENSE. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <smitto.h>
#include <QtWidgets/QWidget>
#include <QtCore/QMap>
class QVBoxLayout;
class QStackedWidget;

namespace Smitto {

extern const QString SMITTO_LIB_EXPORT  l1StyleSheet;
extern const QString SMITTO_LIB_EXPORT  l2StyleSheet;
extern const QString SMITTO_LIB_EXPORT  l3StyleSheet;
extern const QString SMITTO_LIB_EXPORT  l4StyleSheet;

class SMITTO_LIB_EXPORT MenuStackedWidget : public QWidget
{
public:
	MenuStackedWidget(const QString& activeStyleSheet, const QString& backgroundStyleSheet, QWidget* parent = Q_NULLPTR);

	void selectMenuItem(QObject* watched);
	void selectFirstMenuItem();

	void insertMenuWidget(QWidget*, QWidget*);
	void insertMenuStretch();

	QWidget* baseMenuWidget() {return baseMenuWidget_;}

protected:
	bool eventFilter(QObject* watched, QEvent* event) Q_DECL_OVERRIDE;

private:
	const QString& activeStyleSheet_;
	const QString& backgroundStyleSheet_;
	QMap<QWidget*, QWidget*> widgets_;
	QVBoxLayout* menuLayout_;
	QStackedWidget* stackedWidget_;
	//Corner
	QWidget* baseMenuWidget_;
	QWidget* lastActiveMenu_ = Q_NULLPTR;
};

} // Smitto::
