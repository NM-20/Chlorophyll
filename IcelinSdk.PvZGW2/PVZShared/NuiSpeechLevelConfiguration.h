#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861CA8
   RuntimeId:        1FDD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          063A
   VfTable:          0000000142344258
   Address (Base):   0000000143109510
*/
#pragma pack(push, 8)
class NuiSpeechLevelConfiguration : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class NuiSpeechCompiledGrammar) CompiledGrammars; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(NuiSpeechLevelConfiguration) == 32);

}
