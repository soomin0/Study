#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_ImageProcessingStudy.h"

class ImageProcessingStudy : public QMainWindow
{
    Q_OBJECT

public:
    ImageProcessingStudy(QWidget *parent = Q_NULLPTR);

private:
    Ui::ImageProcessingStudyClass ui;
};
