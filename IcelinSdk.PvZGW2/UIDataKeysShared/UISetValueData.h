#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875958
   RuntimeId:        2D2E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A13
   VfTable:          000000014238D8D8
   Address (Base):   00000001430E1000
*/
#pragma pack(push, 8)
class UISetValueData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UISimpleDataSource DataSource; /* 0x0018 */
  FB_INT32 IntValue; /* 0x0028 */
  FB_FLOAT32 FloatValue; /* 0x002C */
  FB_CSTRING StringValue; /* 0x0030 */
  FB_BOOLEAN BoolValue; /* 0x0038 */
  FB_BOOLEAN AllLocalPlayers; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UISetValueData) == 64);

}
