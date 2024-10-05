#include "values.h"

Values::Values(QWidget* verticalLayoutWidget) {

    horizontalLayout = new QHBoxLayout();
    horizontalLayout->setSpacing(2);
    horizontalLayout->setObjectName("horizontalLayout");
    horizontalLayout->setContentsMargins(0, 0, 0, 0);

    values_list.push_back(new LabelCopy(verticalLayoutWidget));
    horizontalLayout->addLayout(values_list.back()->value_copy);

    values_list.push_back(new LabelCopy(verticalLayoutWidget));
    horizontalLayout->addLayout(values_list.back()->value_copy);

    values_list.push_back(new LabelCopy(verticalLayoutWidget));
    horizontalLayout->addLayout(values_list.back()->value_copy);

}
