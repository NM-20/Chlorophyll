#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868DA0
   RuntimeId:        242D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          067F
   VfTable:          0000000142356188
   Address (Base):   00000001430F82F0
*/
#pragma pack(push, 8)
class GameIntensityTemplateData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameIntensityTemplateData) == 24);

}
