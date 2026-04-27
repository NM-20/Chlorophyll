#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839B78
   RuntimeId:        06F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C9
   VfTable:          00000001421FF6D8
   Address (Base):   00000001430F1B60
*/
#pragma pack(push, 16)
class UpdateColorSecondaryData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UpdateColorSecondaryData) == 64);

}
