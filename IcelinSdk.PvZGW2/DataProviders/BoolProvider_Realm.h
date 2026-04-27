#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/BoolProvider.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 00000001428349B8
   RuntimeId:        0228
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          106E
   VfTable:          00000001421ECBC0
   Address (Base):   000000014311B570
*/
#pragma pack(push, 8)
class BoolProvider_Realm : public BoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BoolProvider_Realm) == 24);

}
