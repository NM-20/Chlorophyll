#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/Core/PlatformScalableBool.h>

namespace fb
{

/* TypeInfo (Array): 0000000142834998
   RuntimeId:        0226
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1067
   VfTable:          00000001421ECBD8
   Address (Base):   000000014311B5D0
*/
#pragma pack(push, 8)
class BoolProvider_Platform : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PlatformScalableBool Platforms; /* 0x0010 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_Platform) == 32);

}
