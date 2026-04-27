#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistentValueType.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistentValueDataType.h>
#include <IcelinSdk.PvZGW2/GameShared/PersistentValueHistoryType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849E28
   RuntimeId:        0E1C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB4C0
   Default Value:    0000000142849E40
*/
#pragma pack(push, 8)
struct PersistentValueTemplateData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_CSTRING DefaultValue; /* 0x0008 */
  FB_FLOAT32 DefaultFloatValue; /* 0x0010 */
  PersistentValueType ValueType; /* 0x0014 */
  PersistentValueDataType DataType; /* 0x0018 */
  FB_FLOAT32 ValueChangeTriggersSaveThreshold; /* 0x001C */
  FB_INT32 DecimalPrecision; /* 0x0020 */
  PersistentValueHistoryType HistoryType; /* 0x0024 */
  FB_BOOLEAN ClubStat; /* 0x0028 */
  char pad_0029[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PersistentValueTemplateData) == 48);

}
