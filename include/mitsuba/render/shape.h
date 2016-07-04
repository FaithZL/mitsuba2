#pragma once

#include <mitsuba/core/object.h>

NAMESPACE_BEGIN(mitsuba)

class MTS_EXPORT_RENDER Shape : public Object {
public:
    virtual void doSomething() = 0;
        
    MTS_DECLARE_CLASS()

protected:
    virtual ~Shape();
};

NAMESPACE_END(mitsuba)
