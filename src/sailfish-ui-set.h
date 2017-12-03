#ifndef SAILFISHUISET_H
#define SAILFISHUISET_H

#include <QtQml>

#include "localfilebrowser.h"

Q_DECLARE_METATYPE(LocalFileBrowser*)

namespace SailfishUiSet {
void registerQmlTypes() {
    qmlRegisterType<LocalFileBrowser>("SailfishUiSet", 1, 0, "LocalFileBrowser");
}
}

#endif // SAILFISHUISET_H
