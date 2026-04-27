#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870078
   RuntimeId:        295F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0752
   VfTable:          000000014236DC88
   Address (Base):   0000000143105250
*/
#pragma pack(push, 8)
class PVZUIConnectionCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZUIConnectionCompData) == 48);

}
