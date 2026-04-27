#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870058
   RuntimeId:        295D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0755
   VfTable:          000000014236DC48
   Address (Base):   00000001431052B0
*/
#pragma pack(push, 8)
class PVZUISettingsCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZUISettingsPage) SettingsPages; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZUISettingsCompData) == 56);

}
