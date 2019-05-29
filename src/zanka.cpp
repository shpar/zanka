#pragma once
#include <iostream>
#include <string>
#include <QApplication>
#include <QPushButton>
#include <JuceHeader.h>
#include <juce_core/juce_core.h>
#include <boost/filesystem.hpp>

int main(int argc, char **argv)
{
 QApplication app (argc, argv);
 juce::String jucestring = "Hello";
 std::string normalstring = jucestring.toStdString();
 boost::filesystem::path boostpath = "/bin/";
 normalstring += boostpath.string();
 QPushButton button (QString::fromStdString(normalstring));
 button.show();

 return app.exec();
}
