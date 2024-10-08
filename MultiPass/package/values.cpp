#include "values.h"

Values::Values(QWidget* verticalLayoutWidget,
               QString email,
               QString login,
               QString password)



               // bool email,
               // bool login,
               // bool password)

{

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(2);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    // value_Class = new QLabel();
    // value_Class->setObjectName("value_Class_1");
    // value_Class->setEnabled(true);
    // value_Class->setMinimumSize(QSize(INTERFACE::LABELCOPY_VALUE_COPY_WIDTH, INTERFACE::LABELCOPY_VALUE_COPY_HEIGHT));
    // value_Class->setMaximumSize(QSize(10000, 30));
    // value_Class->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABELCOPY_LABEL_COLOR));
    // value_Class->setAlignment(Qt::AlignCenter);

    // horizontalLayout->addWidget(value_Class);

    // btn_Class = new QPushButton();
    // btn_Class->setObjectName("btn_Class_1");
    // btn_Class->setFixedSize(QSize(INTERFACE::LABELCOPY_BTN_CLASS_WIDTH, INTERFACE::LABELCOPY_BTN_CLASS_WIDTH));
    // btn_Class->setStyleSheet(QString::fromUtf8(INTERFACE::CSS_LABELCOPY_BNT_COLOR));

    // horizontalLayout->addWidget(btn_Class);

    if (!email.isEmpty())
    {
        label_copy_list.push_back(new LabelCopy(verticalLayoutWidget,email));
        horizontalLayout->addLayout(label_copy_list.back()->horizontalLayout_value_copy);
    }
    if (!login.isEmpty())
    {
        label_copy_list.push_back(new LabelCopy(verticalLayoutWidget,login));
        horizontalLayout->addLayout(label_copy_list.back()->horizontalLayout_value_copy);
    }
    if (!password.isEmpty())
    {
        label_copy_list.push_back(new LabelCopy(verticalLayoutWidget,password));
        horizontalLayout->addLayout(label_copy_list.back()->horizontalLayout_value_copy);
    }
}
