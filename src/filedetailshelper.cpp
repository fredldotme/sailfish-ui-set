#include "filedetailshelper.h"

FileDetailsHelper::FileDetailsHelper(QObject *parent) : QObject(parent)
{

}

QString FileDetailsHelper::getIconFromMime(const QString& mimeType) {
    if(mimeType.indexOf("image") == 0) {
        return QStringLiteral("image://theme/icon-l-image");
    } else if(mimeType.indexOf("audio") == 0) {
        return QStringLiteral("image://theme/icon-l-music");
    } else if(mimeType.indexOf("video") == 0) {
        return QStringLiteral("image://theme/icon-l-video");
    } else {
        return QStringLiteral("image://theme/icon-l-document");
    }
}

QString FileDetailsHelper::getHRSize(quint64 bytes) {
    const QStringList units = {"bytes", "kB", "MB", "GB", "TB"};
    int i = 0;

    for(; i < units.length() && bytes >= 1024; i++) {
        bytes = bytes / 1024;
    }

    return QString::number((double)bytes, 'f', 2) + " " + units[i];
}

QString FileDetailsHelper::getHRSizeFromString(QString byteString) {
    quint64 bytes = byteString.toULongLong();
    return getHRSize(bytes);
}
