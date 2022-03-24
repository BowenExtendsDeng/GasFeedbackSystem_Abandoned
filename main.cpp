#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include "dao_reactionstatemapper.h"

int main(int argc, char *argv[]) {

    ReactionStateMapper rsmp;
    QVector<ReactionState> names = rsmp.selectAll();
    QVector<ReactionState>::iterator iter;
    for (iter = names.begin(); iter != names.end(); iter++){
        qDebug() << iter->getReactantName() << "\0";
//        qDebug() << iter->getReactantConcentration();
//        qDebug() << iter->getRelativeContent();
    }
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
