#include <QApplication>
#include <QPushButton>
#include <QDebug>
#include "dao_reactionstatemapper.h"

int main(int argc, char *argv[]) {

    ReactionStateMapper rsmp;
    QVector<ReactionState> names = rsmp.selectAll();
    QVector<ReactionState>::iterator i = names.begin();
    while (i != names.end()) {
        ReactionState temp = *i;
        qDebug() << temp.getReactantName() << temp.getReactantConcentration() << temp.getRelativeContent();
        i++;
    }
    QApplication a(argc, argv);
    QPushButton button("Hello world!", nullptr);
    button.resize(200, 100);
    button.show();
    return QApplication::exec();
}
