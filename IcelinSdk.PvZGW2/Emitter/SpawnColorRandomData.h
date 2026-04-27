#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839918
   RuntimeId:        06CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C3
   VfTable:          00000001421FF918
   Address (Base):   0000000143115CF0
*/
#pragma pack(push, 16)
class SpawnColorRandomData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color0; /* 0x0030 */
  Vec3 Color1; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(SpawnColorRandomData) == 80);

}
