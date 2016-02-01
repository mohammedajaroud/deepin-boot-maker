/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

#include "dcombobox.h"

#include <QListView>

DComboBox::DComboBox(QWidget *parent) :
    QComboBox(parent)
{
    QString style = ""
            "QComboBox {"
                "color:#b4b4b4;"
                "font-size: 14px;"
                "border: 0px solid gray;"
                "border-radius: 3px;"
                "padding: 1px 18px 1px 3px;"
                "min-width: 6em;"
            "}"
            "QComboBox:editable {"
                "background: #232323;"
            "}"
            "QComboBox:!editable, QComboBox::drop-down:editable {"
                "border-image:url(:/ui/images/button_normal.png);"
            "}"
            "/* QComboBox gets the \"on\" state when the popup is open */"
            "QComboBox:!editable:on, QComboBox::drop-down:editable:on {"
                "border-image:url(:/ui/images/button_normal.png);"
            "}"
            "QComboBox:on { /* shift the text when the popup opens */"
                "padding-top: 3px;"
                "padding-left: 4px;"
            "}"
            "QComboBox::drop-down {"
                "subcontrol-origin: padding;"
                "subcontrol-position: top right;"
                "width: 20px;"
                "border-width: 0px;"
                "border-top-right-radius: 3px; /* same radius as the QComboBox */"
                "border-bottom-right-radius: 3px;"
            "}"
            "QComboBox::down-arrow {"
                "image: url(:/ui/images/arrow_down_normal.png);"
            "}"
            "QComboBox::down-arrow:hover {"
                "image: url(:/ui/images/arrow_down_hover.png);"
            "}"
            "QComboBox::down-arrow:on { /* shift the arrow when popup is open */"
                "top: 1px;"
                "left: 1px;"
            "}";
    setStyleSheet(style);

    QListView * listView = new QListView(this);
    style = ""
    "QListView {"
        "color:#b4b4b4;"
        "font-size: 14px;"
        "border: 1px solid #232323;;"
        "alternate-background-color: #232323;"
        "show-decoration-selected: 1;"
        "background: #232323;"
    "}"
    "QListView::item {"
        "border: 0px solid gray;"
        "background: #232323;"
    "}"
    "QListView::item:alternate {"
        "border: 0px solid gray;"
        "background: #232323;"
    "}"
    "QListView::item:selected {"
        "background: #232323;"
        "border: 0px solid #6a6ea9;"
    "}"
    "QListView::item:selected:!active {"
        "border: 0px solid gray;"
        "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                    "stop: 0 black, stop: 1 #232323);"
    "}"
    "QListView::item:selected:active {"
        "border: 0px solid gray;"
        "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                    "stop: 0 black, stop: 1 #232323);"
    "}"
    "QListView::item:hover {"
        "border: 0px solid gray;"
        "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
                                    "stop: 0 black, stop: 1 #232323);"
    "}";
    listView->setStyleSheet(style);

    this->setView(listView);
}
