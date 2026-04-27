#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameObjectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014283B588
   RuntimeId:        08CE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          096A
   VfTable:          000000014220AF60
   Address (Base):   00000001430B5DA0
*/
#pragma pack(push, 8)
class BaseShapeData : public GameObjectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BaseShapeData) == 24);

}
