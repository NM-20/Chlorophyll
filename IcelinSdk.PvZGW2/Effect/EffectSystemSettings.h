#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/QualityLevel.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839250
   RuntimeId:        067D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EDE
   VfTable:          00000001421FEA40
   Address (Base):   00000001430BE550
*/
#pragma pack(push, 8)
class EffectSystemSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  QualityLevel EffectQualityLevel; /* 0x0010 */
  FB_BOOLEAN EnterLevelDisableEffectEnable; /* 0x0014 */
  char pad_0015[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(EffectSystemSettings) == 24);

}
