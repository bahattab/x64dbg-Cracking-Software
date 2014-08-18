#ifndef PAGEMEMORYRIGHTS_H
#define PAGEMEMORYRIGHTS_H

#include <QDialog>
#include "StdTable.h"
#include "Bridge.h"

#define PAGE_SIZE 0x1000

namespace Ui
{
class PageMemoryRights;
}

class PageMemoryRights : public QDialog
{
    Q_OBJECT

public:
    explicit PageMemoryRights(QWidget* parent = 0);
    void RunAddrSize(uint_t, uint_t, QString);
    ~PageMemoryRights();

private slots:
    void on_btnSelectall_clicked();

    void on_btnDeselectall_clicked();

    void on_btnSetrights_clicked();

private:
    Ui::PageMemoryRights* ui;
    uint_t addr;
    uint_t size;
    QString pagetype;
};

#endif // PAGEMEMORYRIGHTS_H
