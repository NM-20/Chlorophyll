#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Blueprint.h>

namespace fb
{

/* TypeInfo (Array): 000000014283A5A8
   RuntimeId:        07D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0794
   VfTable:          000000014220C478
   Address (Base):   00000001430B5770
*/
#pragma pack(push, 8)
class ObjectBlueprint : public Blueprint
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class EntityData) Object; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ObjectBlueprint) == 72);

}
