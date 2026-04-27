#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/Dialect.h>
#include <IcelinSdk.PvZGW2/Core/LanguageFormat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861C68
   RuntimeId:        1FD9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08B4
   VfTable:          0000000142344268
   Address (Base):   00000001431095D0
*/
#pragma pack(push, 8)
class NuiSpeechDialect : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Dialect Dialect; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING Tag; /* 0x0018 */
  FB_CSTRING Name; /* 0x0020 */
  LanguageFormat Language; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechDialect) == 48);

}
