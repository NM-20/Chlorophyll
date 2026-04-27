#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UI/UITextDatabase.h>

namespace fb
{

/* TypeInfo (Array): 0000000142857228
   RuntimeId:        199F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          065F
   VfTable:          00000001422CB930
   Address (Base):   000000014310D0B0
*/
#pragma pack(push, 8)
class FsUITextDatabase : public UITextDatabase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(FsUITextDatabase) == 72);

}
