#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EAD8
   RuntimeId:        1241
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F0F
   VfTable:          0000000142272CA8
   Address (Base):   0000000143111010
*/
#pragma pack(push, 8)
class TextUnlockPartData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ShaderNodeName; /* 0x0010 */
  FB_HANDLE(class ObjectBlueprint) MeshBlueprint; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TextUnlockPartData) == 32);

}
