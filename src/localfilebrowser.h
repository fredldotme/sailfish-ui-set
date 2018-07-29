#ifndef LOCALFILEBROWSER_H
#define LOCALFILEBROWSER_H

#include <QObject>
#include <QDir>
#include <QStandardPaths>
#include <QVariantList>

class LocalFileBrowser : public QObject
{
    Q_OBJECT
public:
    LocalFileBrowser(QObject *parent = 0);

    Q_PROPERTY(QString path READ path WRITE setPath)

    Q_INVOKABLE QVariantList cd(QString path);
    Q_INVOKABLE QVariantList cd();

private:
    QString m_path;
    QString path();
    void setPath(QString value);

};
Q_DECLARE_METATYPE(LocalFileBrowser*)

#endif // LOCALFILEBROWSER_H
