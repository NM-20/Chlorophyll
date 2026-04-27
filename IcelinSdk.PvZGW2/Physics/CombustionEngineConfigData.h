#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/EngineConfigData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851250
   RuntimeId:        1450
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1007
   VfTable:          000000014227F618
   Address (Base):   00000001430FC130
*/
#pragma pack(push, 16)
class CombustionEngineConfigData : public EngineConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CombustionEngineConfigData) == 112);

}
