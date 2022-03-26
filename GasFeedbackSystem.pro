QT       += core gui sql network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    controller_datasender.cpp \
    dao_mysqldriver.cpp \
    dao_reactionstatemapper.cpp \
    main.cpp \
    pojo_reactionstate.cpp \
    service_defaultservice.cpp \
    service_servicefactory.cpp \
    service_servicemodel.cpp

HEADERS += \
    controller_datasender.h \
    dao_mysqldriver.h \
    dao_reactionstatemapper.h \
    pojo_reactionstate.h \
    service_defaultservice.h \
    service_servicefactory.h \
    service_servicemodel.h

FORMS +=

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES +=
