/***************************
@Author: Chunel
@Contact: chunel@foxmail.com
@File: GMessageObject.h
@Time: 2022/10/30 20:37
@Desc: 
***************************/

#ifndef CGRAPH_GMESSAGEOBJECT_H
#define CGRAPH_GMESSAGEOBJECT_H

#include "../GraphObject.h"
#include "../GraphParam/GParamInclude.h"

CGRAPH_NAMESPACE_BEGIN

/**
 * @brief GMessageObject在继承GraphObject的基础上删除了run函数 (GraphObject = CObject)
 */
class GMessageObject : public GraphObject {
public:
    CStatus run() final {
        CGRAPH_NO_SUPPORT
    }
};

CGRAPH_NAMESPACE_END

#endif //CGRAPH_GMESSAGEOBJECT_H
