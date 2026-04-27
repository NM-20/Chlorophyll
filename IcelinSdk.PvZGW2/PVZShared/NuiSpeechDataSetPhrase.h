#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechPhrase.h>
#include <IcelinSdk.PvZGW2/PVZShared/NuiSpeechTargetDataType.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UISimpleDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861FA8
   RuntimeId:        200D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E86
   VfTable:          0000000142343F98
   Address (Base):   0000000143108EB0
*/
#pragma pack(push, 8)
class NuiSpeechDataSetPhrase : public NuiSpeechPhrase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Param; /* 0x0040 */
  NuiSpeechTargetDataType DataType; /* 0x0048 */
  char pad_004C[0x0004];
  UISimpleDataSource DataSource; /* 0x0050 */
  FB_BOOLEAN ForceUpdate; /* 0x0060 */
  char pad_0061[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechDataSetPhrase) == 104);

}
