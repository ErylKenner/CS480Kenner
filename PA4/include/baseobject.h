#ifndef BASEOBJECT_H
#define BASEOBJECT_H

#include <vector>
#include "graphics_headers.h"

class BaseObject
{
public:
    BaseObject(BaseObject *parent);
    ~BaseObject();
    void Update(unsigned int dt);
    virtual void DerivedUpdate(float dt) = 0;
    void Render();

    glm::mat4 GetModel();

    BaseObject *Getparent();
    void SetParent(BaseObject *parent_);

    //Current angle of the cube in radians
    float angle;
protected:
    glm::mat4 model;

    BaseObject *parent;
    std::vector<BaseObject *> children;
private:
    std::vector<Vertex> Vertices;
    std::vector<unsigned int> Indices;
    GLuint VB;
    GLuint IB;
};

#endif /* BASEOBJECT_H */