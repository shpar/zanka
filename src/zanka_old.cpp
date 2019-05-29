#include <iostream>
#include <boost/lexical_cast.hpp>
#include <QCoreApplication>
#include <QDebug>

int main(int argc, char* argv[]) {
    QCoreApplication a(argc, argv);
    std::string testing = boost::lexical_cast<std::string>(1337);
    std::cout << testing << std::endl;
    qDebug() << "hello world";
    return a.exec();
}
