#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875978
   RuntimeId:        2D30
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A2C
   VfTable:          000000014238D958
   Address (Base):   00000001430E0FA0
*/
#pragma pack(push, 8)
class UIGetValueEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UISimpleDataSource DataSource; /* 0x0018 */
  FB_BOOLEAN AssertOnWrongOutput; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIGetValueEntityData) == 48);

}
