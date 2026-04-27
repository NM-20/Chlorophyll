#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875998
   RuntimeId:        2D32
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09C3
   VfTable:          000000014238D920
   Address (Base):   00000001430E0F40
*/
#pragma pack(push, 8)
class UICompareDataKeyEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UISimpleDataSource DataSource; /* 0x0018 */
  FB_STDARRAY(FB_CSTRING) Values; /* 0x0028 */
  FB_BOOLEAN FireEventOnInit; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UICompareDataKeyEntityData) == 56);

}
