#ifndef SAILFISHUISET_H
#define SAILFISHUISET_H

#include <QtQml>

#include "entryinfo.h"
#include "localfilebrowser.h"
#include "filedetailshelper.h"

Q_DECLARE_METATYPE(LocalFileBrowser*)

namespace SailfishUiSet {
void registerQmlTypes() {
    qmlRegisterType<EntryInfo>("SailfishUiSet", 1, 0, "EntryInfo");
    qmlRegisterType<LocalFileBrowser>("SailfishUiSet", 1, 0, "LocalFileBrowser");
    qmlRegisterType<FileDetailsHelper>("SailfishUiSet", 1, 0, "FileDetailsHelper");
}
}

#endif // SAILFISHUISET_H
