#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839B58
   RuntimeId:        06F0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08BF
   VfTable:          00000001421FF718
   Address (Base):   00000001430F1BC0
*/
#pragma pack(push, 16)
class UpdateColorData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UpdateColorData) == 64);

}
