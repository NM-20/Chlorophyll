#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839FB8
   RuntimeId:        0736
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06BD
   VfTable:          00000001421FF3C8
   Address (Base):   0000000143115750
*/
#pragma pack(push, 8)
class EmitterTagList : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class EmitterTag) Tags; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(EmitterTagList) == 32);

}
