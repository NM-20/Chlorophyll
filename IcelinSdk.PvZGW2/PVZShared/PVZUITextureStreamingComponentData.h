#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286FF58
   RuntimeId:        2951
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0757
   VfTable:          000000014236DBD0
   Address (Base):   00000001430F56B0
*/
#pragma pack(push, 8)
class PVZUITextureStreamingComponentData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUITextureStreamingComponentData) == 48);

}
