#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839AB8
   RuntimeId:        06E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C5
   VfTable:          00000001421FF7D8
   Address (Base):   00000001430F1D40
*/
#pragma pack(push, 8)
class UpdateSizeData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 Pivot; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateSizeData) == 56);

}
