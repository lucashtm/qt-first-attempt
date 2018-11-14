/********************************************************************************
** Form generated from reading UI file 'qtuner.ui'
**
** Created by: Qt User Interface Compiler version 5.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTUNER_H
#define UI_QTUNER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QTuner
{
public:
    QWidget *centralWidget;
    QLabel *labelFreq;
    QPushButton *getFreq;
    QLabel *labelNote;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *QTuner)
    {
        if (QTuner->objectName().isEmpty())
            QTuner->setObjectName(QStringLiteral("QTuner"));
        QTuner->resize(400, 300);
        centralWidget = new QWidget(QTuner);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        labelFreq = new QLabel(centralWidget);
        labelFreq->setObjectName(QStringLiteral("labelFreq"));
        labelFreq->setGeometry(QRect(140, 140, 121, 41));
        labelFreq->setAlignment(Qt::AlignCenter);
        getFreq = new QPushButton(centralWidget);
        getFreq->setObjectName(QStringLiteral("getFreq"));
        getFreq->setGeometry(QRect(130, 210, 141, 41));
        labelNote = new QLabel(centralWidget);
        labelNote->setObjectName(QStringLiteral("labelNote"));
        labelNote->setGeometry(QRect(160, 70, 81, 31));
        labelNote->setAlignment(Qt::AlignCenter);
        QTuner->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(QTuner);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        QTuner->setStatusBar(statusBar);

        retranslateUi(QTuner);

        QMetaObject::connectSlotsByName(QTuner);
    } // setupUi

    void retranslateUi(QMainWindow *QTuner)
    {
        QTuner->setWindowTitle(QApplication::translate("QTuner", "QTuner", nullptr));
        labelFreq->setText(QString());
        getFreq->setText(QApplication::translate("QTuner", "Get Frequency", nullptr));
        labelNote->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class QTuner: public Ui_QTuner {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTUNER_H
