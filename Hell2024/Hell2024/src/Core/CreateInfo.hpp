#pragma once

#include "HellCommon.h"

struct DoorCreateInfo 
{
    glm::vec3 position = glm::vec3(0);
    float rotation = 0;
    bool openAtStart = false;
};

struct WindowCreateInfo 
{
    glm::vec3 position = glm::vec3(0);
    float rotation = 0;
};

struct LightCreateInfo 
{
    glm::vec3 position;
    glm::vec3 color;
    float radius;
    float strength;
    int type;
};

struct DobermannCreateInfo 
{
    glm::vec3 position;
    float rotation;
    DobermannState initalState;
};

struct CSGPlaneCreateInfo 
{
    glm::vec3 vertexTL;
    glm::vec3 vertexTR;
    glm::vec3 vertexBL;
    glm::vec3 vertexBR;
    int materialIndex = -1;
    float textureScale = 1;
    float textureOffsetX = 0;
    float textureOffsetY = 0;
};